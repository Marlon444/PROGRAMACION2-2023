#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, suma = 0, fib;
    while (num1 + num2 <= 100) {
        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
        suma += fib;
    }
    printf("La suma de los elementos de la serie de Fibonacci entre 0 y 100 es: %d\n", suma);
    return 0;
}

