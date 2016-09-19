#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "memAlloc.h"
#include "function.h"
#include "preCode.h"


/// Funcoes que decodificam e criptografam o texto
//Funcao que le o texto e o codifica
void encrypts(char *text, unsigned long long int n, long long int e) {
    FILE *preCoded = fopen("preCoded.txt", "w");
    int count = 0, i = 0;

    // Le os caracteres do texto e ja os precodifica em numeros
    for (i = 0; i < strlen(text); i++) {
        preCode(preCoded, &text[i], &count);
    }
    fclose(preCoded);

    FILE *preCoded2 = fopen("preCoded.txt", "r");
    FILE *preCodeBlock = fopen("preCodedBlock.txt", "w");
    //strcat(namedir, ".txt");
    FILE *coded = fopen("encrypted.txt", "w");

    // Transforma o vetor de numeros em blocos a serem codificados
    char *vectorTemp;
    int *vectorBlock, k = 0;
    vectorBlock = memAllocInt(count);

    for (i = 0; i < count; i++) {
        vectorTemp = memAllocString(1);
        fgets(vectorTemp, 2, preCoded2);
        vectorBlock[k] = atoi(vectorTemp);
        // Transforma o vetor em numero e verifica se eh maior que n
        unsigned long long int number = transformVectorNumber(vectorBlock, k + 1);
        
        if ((number >= n && vectorBlock[k] != 0) || (i == count - 1)) {
            long long int block;
            
            if (i != count - 1)
                block = transformVectorNumber(vectorBlock, k);
            else if(i == count - 1 && number < n)
                block = transformVectorNumber(vectorBlock, k + 1);
            else if(i == count - 1 && number >= n) {
                // Transforma o numero menor que n em block, ja o codifica e escreve nos arquivos
                long long int block2 = transformVectorNumber(vectorBlock, k);
                fprintf(preCodeBlock, "%lld-", block2);
                vectorBlock[0] = vectorBlock[k];
                k = 1;
                unsigned long long int result = algoritmoPotenciacao(n, block2, e);
                fprintf(coded, "%llu-", result);

                // Block recebe o numero faltante
                block = transformVectorNumber(vectorBlock, k);
            }
            fprintf(preCodeBlock, "%lld-", block);
            vectorBlock[0] = vectorBlock[k];
            k = 1;

            // Codifica os blocos utilizando o Algoritmo de Potenciacao
            unsigned long long int result = algoritmoPotenciacao(n, block, e);
            fprintf(coded, "%llu-", result);
        }
        else if (number >= n && vectorBlock[k] == 0) {
            long long int block = transformVectorNumber(vectorBlock, k - 1);
            fprintf(preCodeBlock, "%lld-", block);
            vectorBlock[0] = vectorBlock[k - 1];
            vectorBlock[1] = vectorBlock[k];
            k = 2;

            // Algotimo de potenciacao � utilizado para codificar o bloco
            unsigned long long int result = algoritmoPotenciacao(n, block, e);
            fprintf(coded, "%llu-", result);

            if (i == count - 1) {
                block = transformVectorNumber(vectorBlock, k);
                fprintf(preCodeBlock, "%lld-", block);
                // Algotimo de potenciacao
                unsigned long long int result = algoritmoPotenciacao(n, block, e);
                fprintf(coded, "%llu-", result);
            }
        }
        else
            k++;
    }

    free(vectorBlock);
    free(vectorTemp);
    fclose(preCoded2);
    fclose(preCodeBlock);
    fclose(coded);
    // Remove um arquivo que foi apenas usado temporariamente
    char *archive, *archive2;
    archive = "preCoded.txt";
    archive2 = "preCodedBlock.txt";
    remove(archive);
    remove(archive2);
}

// Decodifica um texto ja codificado
int decode(char *nameFile, unsigned long long int n, long long int d) {
    strcat(nameFile, ".txt");
    FILE *coded = fopen(nameFile, "r");
    
    if (coded == NULL) {
        return 2;
    } else {
        FILE *preDecoded = fopen("preDecoded.txt", "w");

        char *vectorTemp, *aux;
        int *vectorBlock = memAllocInt(32), k = 0;
        int vectorAux[2], i;

        // Le o arquivo codificado, pega os numeros em blocos e os decodifica
        while(!feof(coded)) {
            vectorTemp = memAllocString(1);
            fgets(vectorTemp, 2, coded);
            
            // guarda os numeros lidos ate que se chegue ao final do bloco
            if (vectorTemp[0] != '-') {
                vectorBlock[k] = atoi(vectorTemp);
                k++;
            }
            // Chegando no final do bloco, pega-se o numero e o decodifica
            else {
                unsigned long long int number = transformVectorNumber(vectorBlock, k);
                unsigned long long int result = algoritmoPotenciacao(n, number, d);
                fprintf(preDecoded, "%llu", result);
                k = 0;
            }
        }
        fclose(preDecoded);
        FILE *preDecoded2 = fopen("preDecoded.txt", "r");

        k = 0;
        int count = 0;
        char *pass = memAllocString(100);
        
        // Cada numero � transformado em sua respectiva letra
        while (!feof(preDecoded2)) {
            aux = memAllocString(1);
            fgets(aux, 2, preDecoded2);
            vectorAux[k] = atoi(aux);
            
            if (k == 1) {
                int number = transformVectorNumber(vectorAux, k + 1);
                pass[count] = preDecode(number);
                printf("%c", pass[count]);
                count++;
                k = 0;
            }
            else
                k++;
        }

        getchar();
        fclose(coded);
        fclose(preDecoded2);
        free(vectorBlock);
        free(vectorTemp);
        free(aux);
        char *archive = "preDecoded.txt";
        remove(archive);
        free(pass);
        return 0;
    }
}