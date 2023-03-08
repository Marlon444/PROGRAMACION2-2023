#include <stdio.h>

int main() {
    int numero, i, j;
    long long factorial;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        printf("Factorial de %d: %lld\n", i, factorial);
    }

    return 0;
}

