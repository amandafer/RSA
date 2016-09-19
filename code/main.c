#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "function.h"
#include "memAlloc.h"
#include "cryptography.c"


int main(int argc, char *argv[]) {
    char *action = argv[0];
    char *text = argv[1];
    char *nameFile = argv[1];

    unsigned long long int p, q, e, phi_n, n; long long int d;
    int *vectorPrimes, i;
    // Acha-se a chave publica n
    n = 817262681;
    p = 15013;
    q = 54437;

    // Consegue-se o phi de n
    phi_n = (p - 1)*(q - 1);

    vectorPrimes = vectorOfPrimes();

    // Testa se o primo divide phi de n
    for(i = 2; i < 5000; i++) {
        if(vectorPrimes[i] && i < phi_n) {
            int rest = phi_n%i;
            // Se nao divide, e recebe o primo i, utilizando o Algoritmo Euclidiano Estendido, consegue-se d
            if (rest != 0) {
                // Acha e, tal que o mesmo seja o menor primo que mdc com n seja 1
                e = i;
                // O Algoritmo EE dar� o d que � o inverso de e m�dulo phi_n
                algoritmoEE(phi_n, e, &d);
                break;
            }
        }
    }

    if(d < 0)
        d += phi_n;
    
    if (strcmp(action, "./encrypt") == 0) {
        // Com a chave publica n e 'e', criptografa-se o texto
        encrypts(text, n, e);
    } else if (strcmp(action, "./decode") == 0) {
        // Decodifica a mensagem codificada acima
        int success = decode(nameFile, n, d);
	    if (success == 1)
            return 1;
    }
	    
    free(vectorPrimes);
    return 0;
}
