#include <stdio.h>

#define numeros 100

int main() {
    int vector[numeros];
    int i;
    for (i = 0; i < numeros; i++) {
        vector[i] = i + 1;
    }

    printf("El contenido del en orden descendente es:\n");
    for (i = numeros - 1; i >= 0; i--) {
        printf("%d ", vector[i]);
    }

    return 0;
}

