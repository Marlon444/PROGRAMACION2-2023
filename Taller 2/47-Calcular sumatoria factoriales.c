#include <stdio.h>

int main() {
    int numero, i, j;
    long long factorial;
    long long suma = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        suma += factorial;
    }

    printf("La sumatoria de los factoriales es: %lld\n", suma);

    return 0;
}

