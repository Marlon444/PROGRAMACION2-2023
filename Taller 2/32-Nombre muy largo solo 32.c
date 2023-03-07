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
    int numero, suma = 0, count = 0;

    do {
        printf("Ingrese un numero entero o digite 0 para salir : ");
        scanf("%d", &numero);
        if (es_primo(numero)) {
            suma += numero;
            count++;
        }
    } while (numero != 0);

    if (count == 0) {
        printf("No se ingresaron numeros primos\n");
    } else {
        int promedio = suma / count;
        printf("El promedio entero de los numeros primos es: %d\n", promedio);
    }

    return 0;
}

