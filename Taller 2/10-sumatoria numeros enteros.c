
#include <stdio.h>

int main(){

    int numero,x=1,suma,y;


    printf("Escriba el numero hasta que desea sumar:  ");
    scanf("%d", &numero);

    if(numero==x){
        printf(" La suma da 0 ");
        return 0;
    }else if(numero > x){
        y = numero;
        numero = x;
        x = y;
    }

    numero++; 
    x--;
    suma=((x - numero +1) * (numero +x)) / 2;

    printf("La suma de los numeros comprendidos es: %d",suma);
    return 0;
}
