#include <stdio.h>

int main(){
	
    int numero, digito, mayor = 0;
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);
    
    while (numero > 0) {
        digito = numero % 10;
        if (digito > mayor){
            mayor = digito;
        }
        numero /= 10;
    }
    
    printf("El mayor digito del numero es: %d", mayor);
    
    
    return 0;
}

