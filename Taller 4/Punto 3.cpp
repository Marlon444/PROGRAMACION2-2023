#include <stdio.h>

#define numeros 100

int main() {   

    int vector[numeros];
    int i, menor10 = 0, entre10_30 = 0, entre31_60 = 0, mayor60 = 0;

   
    for (i = 0; i < numeros; i++) {
        printf("Ingrese el numero %d: ", i+1);
        scanf("%d", &vector[i]);

        if (vector[i] < 10) {
            menor10++;
        } else if (vector[i] >= 10 && vector[i] <= 30) {
            entre10_30++;
        } else if (vector[i] >= 31 && vector[i] <= 60) {
            entre31_60++;
        } else {
            mayor60++;
        }
    }


    printf("\nMenores de 10: %d\n", menor10);
    printf("Entre 10 y 30: %d\n", entre10_30);
    printf("Entre 31 y 60: %d\n", entre31_60);
    printf("Mayores de 60: %d\n", mayor60);

    return 0;
}

