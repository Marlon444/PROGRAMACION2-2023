#include <stdio.h>
#include <stdbool.h>

bool es_primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int contar_digitos_primos(int n) {
    int contador = 0;
    while (n != 0) {
        int digito = n % 10;
        if (es_primo(digito)) {
            contador++;
        }
        n /= 10;
    }
    return contador;
}

int main() {
	
    int num1, num2;
    
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &num1, &num2);

    int num1_digitos_primos = contar_digitos_primos(num1);
    int num2_digitos_primos = contar_digitos_primos(num2);

    if (num1_digitos_primos > num2_digitos_primos) {
        printf("El primer numero tiene mas digitos primos.\n");
    } else if (num2_digitos_primos > num1_digitos_primos) {
        printf("El segundo numero tiene mas digitos primos.\n");
    } else {
        printf("Los dos numeros tienen la misma cantidad de digitos primos.\n");
    }

    return 0;
}

