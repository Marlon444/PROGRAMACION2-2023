#include <stdio.h>

char Pasar_Minus(char c) {
    if (isupper(c)) {
        return c + ('a' - 'A');
    } else {
        return c;
    }
}

int main() {
    char c = 'B' ;
    char Minuscula = Pasar_Minus(c);

    printf("El caracter '%c' en  minuscula es '%c' \n", c, Minuscula);
    return 0;
}
