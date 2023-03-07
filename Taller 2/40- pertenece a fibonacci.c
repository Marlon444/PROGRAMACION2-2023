#include <stdio.h>

int main() {
	
	
    int numero, a = 0, b = 1, c = 0;
    
    
    printf("Ingrese un numero de dos digitos: ");
    scanf("%d", &numero);
    while (c < numero) {
        c = a + b;
        a = b;
        b = c;
    }
    if (c == numero) {
        printf("%d pertenece a la serie de Fibonacci.\n", numero);
    } else {
        printf("%d no pertenece a la serie de Fibonacci.\n", numero);
    }
    return 0;
}

