#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h> // para gerar a 'random seed' baseada no tempo
#include "memAlloc.h"

/// Funcoes do TP 1 e 2
static const int N = 5000;
unsigned long long int transformVectorNumber(int v[], int width) {
    unsigned long long int number = 0;
    int i = width - 1;
    
    // Multiplica-se o numeros posua respecitiva unidade, dezena, centena...
    for (; i >= 0 ; i--) {
        number += v[i]*pow(10, (width - 1 - i));
    }
    return number;
}

int *vectorOfPrimes() {
    int i, *a, j;
    a = memAllocInt(N);

    // Cada posicao da lista recebe 1
    for (i = 2; i < N; i++)
        a[i] = 1;
    
    // Se o numero for composto, sua posicao recebe 0
    for (i = 2; i < N; i++) {
        if (a[i]) {
            for (j = i; (j * i) < N; j++) {
                a[i * j] = 0;
            }
        }
    }
    return a;
}

//Funcao que calcula o Algoritmo de Potenciacao
unsigned long long int algoritmoPotenciacao (unsigned long long int n, unsigned long long int a, long long int e) {
    unsigned long long int A = a;
    unsigned long long int P = 1;
    unsigned long long int E = e;

    // Se E for igual a zero, a funcao eh terminada e a resposta impressa na tela
    while (E != 0) {
        // Os valores de E, P e A sao modificados e uma chamada recursiva eh feita
        if (E % 2 != 0) {
            P = (A*P)%n;
            E = (E - 1)/2;
            //Etapa 5
            A = (A*A)%n;
        }
        // Os valores de E e A sao modificados e uma chamada recursiva eh feita
        else {
            E = E/2;
            //Etapa 5
            A = (A*A) % n;
        }
    }
    return P;
}

//Funcao que calcula o Algoritmo de Euclidiano Estendido
void algoritmoEE (unsigned long long int dividend, int divisor, long long int *beta) {
    long long int rest, quocient, x1, x2, y1, y2;
    long long int temp_x, temp_y;
    //O x e o y devem ter seus primeiros dois valores inicializados
    x1 = 1, x2 = 0;
    y1 = 0, y2 = 1;
    rest = dividend%divisor;

    //Enquanto o resto for diferente de zero, o quociente, resto, x's e y's tem seus valores trocados
    while (rest > 0) {
        //Utilizando a funcao mod, o resto eh obtido
        rest = dividend%divisor;

        if (rest > 0) {
            //Ao dividir o dividendo pelo divisor, o quociente eh obtido
            quocient = dividend/divisor;

            //... o dividendo recebe o valor do divisor e o divisor recebe o valor do resto
            dividend = divisor;
            divisor = rest;

            //... x1 recebera o valor de x2 e x2 o valor de x1 - (quocient*x2)
            temp_x = x1 - (quocient*x2);
            x1 = x2;
            x2 = temp_x;
            //... y1 recebera o valor de y2 e y2 o valor de y1 - (quocient*y2)
            temp_y = y1 - (quocient*y2);
            y1 = y2;
            y2 = temp_y;
        }
    }
    *beta = y2;
}
