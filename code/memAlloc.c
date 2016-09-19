#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *memAllocInt(int column) {
    int *vector;
    vector = (int*)malloc(column*sizeof(int*));
    if (vector == NULL) {
        printf("Error: there's not enough memory.");
        return NULL;
    }
    else
        return vector;
}

char *memAllocString(int column) {
    char *vector;
    vector = (char*)malloc(column*sizeof(char*));
    if (vector == NULL) {
        printf("Error: there's not enough memory.");
        return NULL;
    }
    else
        return vector;
}
