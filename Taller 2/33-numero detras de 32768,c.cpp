#include <stdio.h>

int es_primo(int numero) {
    int i;
    if (numero < 2) {
        return 0;
    }
    for (i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numero = 32767; 
    while (numero > 0) {
        if (es_primo(numero)) {
            printf("El número primo mas cercano por debajo de 32768 es: %d\n", numero);
            break;
        }
        numero--;
    }
    
    return 0;
}

