#include <stdio.h>

int main() {
	
    int numero, i, fact=1;
    
    
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);
    
    
    for(i=1; i<=numero; i++) {
        fact *= i;
    }
    printf("El factorial de %d es %d ", numero, fact);
    return 0;
}

