#include <stdio.h>

int main() {
    int numero, digito, suma = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        if (digito % 2 == 0) {
            suma += digito;
        }
        numero /= 10;
    }

    printf("La suma de los dígitos pares es: %d\n", suma);

    return 0;
}

