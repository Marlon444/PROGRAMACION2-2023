#include <stdio.h>
#include <math.h>


double raiz_n(double x, double n) {
    return pow(x,1.0/n);
}
int main() {
	
    float x;
    float n;
    
    printf("Ingrese un numero: ");
    scanf("%f", &x);
    printf("Ingrese la potencia que quiere en la raiz : ");
    scanf("%f", &n);
    float resultado = raiz_n(x, n);
    printf("La raiz %f de %f es: %f", n, x, resultado);
    return 0;
}

