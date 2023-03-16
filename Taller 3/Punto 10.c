#include <stdio.h>
#include <string.h>

void encriptar(char *str) {
    int i, length;
    length = strlen(str);
    
        for(i = 0; i < length; i++) {
        str[i] = str[i] + 1; 
    }
}

int main() {
    char str[100];
    printf("Ingrese una cadena de caracteres: ");
    fgets(str, 100, stdin); 
    
    encriptar(str); 
    
    printf("La cadena encriptada es: %s\n", str);
    
    return 0;
}

