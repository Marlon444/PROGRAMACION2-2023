#include <stdio.h>

int main(){
	
    int num, i;
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    printf("Componentes numericos de %d: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");


    return 0;
}

