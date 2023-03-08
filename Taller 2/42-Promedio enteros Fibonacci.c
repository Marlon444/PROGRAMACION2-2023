#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, suma = 0, contador = 0, promedio;
    while (num1 + num2 <= 1000) {
        int fib = num1 + num2;
        num1 = num2;
        num2 = fib;
        suma += fib;
        contador++;
    }
    promedio = suma / contador;
    printf("El promedio entero de los elementos de la serie de Fibonacci entre 0 y 1000 es: %d\n", promedio);
    return 0;
}

