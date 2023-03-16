#include <stdio.h>

float potencia(float numero, int exponente) {
    float resultado = 1;
    int i;
    if (exponente >= 0) {
        for (i = 0; i < exponente; i++) {
            resultado *= numero;
        }
    } else {
        for (i = 0; i > exponente; i--) {
            resultado /= numero;
        }
    }
    return resultado;
}

int main() {
	 float numero;
	  int exponente;
	printf(" Ingrese un numero cualquiera: ");
	scanf("%f", &numero);
	printf("Ingrese la potencia como numero entero:  ");
	scanf("%d", &exponente);
    float resultado = potencia(numero, exponente);
    printf("%f elevado a la %d es igual a %f\n", numero, exponente, resultado);
    return 0;
}

