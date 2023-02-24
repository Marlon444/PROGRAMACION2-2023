#include <stdio.h>

int main(){
	
    int num, sum = 0, count = 0, promedio;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    while (num > 0) {
        sum += num % 10;
        count++;
        num /= 10;
    }

    if (count > 0){
        promedio = sum / count;
        printf("El promedio entero de los digitos es: %d\n", promedio);
    }else{
        printf("El numero ingresado no tiene digitos.\n");
    }

    return 0;
}

