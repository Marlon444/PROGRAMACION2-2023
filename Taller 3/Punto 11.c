#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *decrypt(char *str) {
    int i, length;
    char *decrypted_str;
    length = strlen(str);
    
    
    decrypted_str = (char*) malloc(length + 1);
    
 
    for(i = 0; i < length; i++) {
        decrypted_str[i] = str[i] - 1; 
    }
    decrypted_str[length] = '\0'; 
    
    return decrypted_str; 
}

int main() {
    char str[100];
    char *decrypted_str;
    printf("Ingrese una cadena de caracteres encriptada: ");
    fgets(str, 100, stdin); 
    
    decrypted_str = decrypt(str); 
    
    printf("La cadena decriptada es: %s\n", decrypted_str);
    
    free(decrypted_str); 
    
    return 0;
}

