#include <stdio.h>

int main(){
	
    int num, primer_digito;
    
    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    while(num >= 10){
        num /= 10;
    }
    
    primer_digito = num;

    printf("El primer digito del numero es: %d", primer_digito);
    
    
    return 0;
}

