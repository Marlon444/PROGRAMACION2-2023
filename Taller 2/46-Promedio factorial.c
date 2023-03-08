#include <stdio.h>

int main() {
    int numero, i, j;
    long long factorial;
    double suma = 0.0;
    int contador = 0;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    for (i = 1; i <= numero; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        suma += factorial;
        contador++;
    }

    int promedio = (int)(suma / contador);

    printf("El promedio entero de los factoriales es: %d\n", promedio);

    return 0;
}

