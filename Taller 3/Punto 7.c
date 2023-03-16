#include <stdio.h>

char Pasar_Mayus(char c) {
    if (islower(c)) {
        return c - ('a' - 'A');
    } else {
        return c;
    }
}

int main() {
    char c ;
    
    printf(" Ingrese una letra que dese pasar a mayusculas: ");
    scanf("%c", &c);
    char Mayuscula = Pasar_Mayus(c);
    printf("El caracter %c en mayuscula es %c \n", c, Mayuscula);
    return 0;
}

