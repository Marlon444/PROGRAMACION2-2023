#include <stdio.h>
#include <string.h>

void encriptar(char cadena[], int clave) {
    int i;
    int len = strlen(cadena);

    for (i = 0; i < len; ++i) {
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            cadena[i] = (char) (((cadena[i] - 'a') + clave) % 26 + 'a');
        }
        else if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
            cadena[i] = (char) (((cadena[i] - 'A') + clave) % 26 + 'A');
        }
    }
}
void desencriptar(char cadena[], int clave) {
    encriptar(cadena, 26 - clave);
}

int main() {
    char cadena[] = " Marlon Serna ";
    int clave = 3;

    encriptar(cadena, clave);
    printf("Mensaje encriptado: %s!!!\n", cadena);

    desencriptar(cadena, clave);
    printf("Mensaje desencriptado: %s!!!\n", cadena);

    return 0;
}

