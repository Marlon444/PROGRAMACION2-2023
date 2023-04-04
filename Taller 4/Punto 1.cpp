#include <stdio.h>

int main() {
    
	const int limite = 50;

    int n;
    printf("Ingrese la cantidad de numeros que desea digitar, no mayor a 50 : ");
    scanf("%d", &n);


    int V1[limite], V2[limite], V3[limite];
    int espacio1 = 0, espacio2 = 0, espacio3 = 0;

    int numero;
    for (int i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &numero);

        if (numero >= 0 && numero <= 10) {
            V1[espacio1++] = numero;
        } else if (numero >= 11 && numero <= 20) {
            V2[espacio2++] = numero;
        } else if (numero > 20) {
            V3[espacio3++] = numero;
        }
    }

    printf("Numeros en V1: ");
    for (int i = 0; i < espacio1; i++) {
        printf("%d ", V1[i]);
    }
    printf("\n");

    printf("Numeros en V2: ");
    for (int i = 0; i < espacio2; i++) {
        printf("%d ", V2[i]);
    }
    printf("\n");

    printf("Numeros en V3: ");
    for (int i = 0; i < espacio3; i++) {
        printf("%d ", V3[i]);
    }
    printf("\n");

    return 0;
}

