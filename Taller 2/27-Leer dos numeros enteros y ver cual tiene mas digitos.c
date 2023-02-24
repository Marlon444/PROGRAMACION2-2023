#include <stdio.h>

int main(){
	
    int num1, num2, digitos1 = 0, digitos2 = 0;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    while (num1 != 0){
        digitos1++;
        num1 /= 10;
    }
    
    while (num2 != 0){
        digitos2++;
        num2 /= 10;
    }
    
    if (digitos1 > digitos2){
        printf("El primer numero tiene mas digitos que el segundo\n");
    }else if(digitos2 > digitos1){
        printf("El segundo numero tiene mas digitos que el primero\n");
    }else{
        printf("Los dos numeros tienen la misma cantidad de digitos\n");
    }
    
    return 0;
}

