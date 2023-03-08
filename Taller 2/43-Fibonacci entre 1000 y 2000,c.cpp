#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, contador = 0;
    while (num1 + num2 <= 2000) {
        int fib = num1 + num2;
        num1 = num2;
        num2 = fib;
        if (fib >= 1000 && fib <= 2000) {
            contador++;
        }
    }
    printf("Hay %d elementos de la serie de Fibonacci entre 1000 y 2000\n", contador);
    return 0;
}

