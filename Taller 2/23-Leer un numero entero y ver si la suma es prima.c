#include <stdio.h>

int main(){
    int num, suma = 0, i, primo = 1;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    while (num > 0){
        suma += num % 10;
        num /= 10;
    }

    for (i = 2; i < suma; i++){
        if (suma % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo == 1){
        printf("La suma de los digitos (%d) es un numero primo.\n", suma);
    } else {
        printf("La suma de los digitos (%d) NO es un numero primo.\n", suma);
    }

    return 0;
}

