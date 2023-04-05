#include <stdio.h>

int main() {
    int vector[20];
    int i, buscar, posicion = -1;

    printf("Ingresa 20 numeros:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vector[i]);
    }

    
    printf("Ingresa el numero que quieres buscar: ");
    scanf("%d", &buscar);

 
    for (i = 0; i < 20; i++) {
        if (vector[i] == buscar) {
            posicion = i;
            break;
        }
    }


    if (posicion == -1) {
        printf("El numero %d no se encontró en el vector.\n", buscar);
    } else {
        printf("El numero %d se encuentra en la posición %d del vector.\n", buscar, posicion);
    }

    return 0;
}


