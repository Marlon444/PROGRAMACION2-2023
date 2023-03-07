#include <stdio.h>

int main() {
	
    int numero1, numero2, primer_num, segundo_num, producto;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);
    
    primer_num = numero1 / 10;
    segundo_num = numero2 / 10;
    
    producto = primer_num * segundo_num;
    
    printf("El producto mutuo de %d y %d es: %d\n", primer_num, segundo_num, producto);
    
    return 0;
}

