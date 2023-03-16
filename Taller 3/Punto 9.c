#include <stdio.h>
#include <math.h>

float numero_redondo(float numero, int aproximacion) {
    float redondear_numero;
    switch (aproximacion) {
        case 0: 
            redondear_numero = floor(numero);
            break;
        case 1: 
            redondear_numero = ceil(numero);
            break;
        case 2: 
            redondear_numero = round(numero);
            break;
        default:
            printf("Error: tipo de aproximación inválido\n");
            return numero;
    }
    return redondear_numero;
}

int main() {
    float numero = 3.14159;
    int aproximacion = 2; // Redondeo al entero más cercano
    float redondear_numero = numero_redondo(numero, aproximacion);
    printf("Numero original: %f\n", numero);
    printf("Numero redondeado: %f\n", redondear_numero);
    return 0;
}

