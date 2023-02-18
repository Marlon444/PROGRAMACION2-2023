#include <stdio.h>

int main(){
	
	float num1,num2,multi,divi,suma,resta;
	printf("Ingrese dos numeros los cuales desee operar\n ");
	printf("Ingrese el primer numero: ");
	scanf("%f", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%f", &num2);
	
	suma =  num1+num2;
	resta =  num1-num2;
	multi = num1*num2;
	divi =  num1/num2;
	
	printf("sumados: %f\n", suma);
	printf("restados: %f\n", resta);
	printf("multiplicados: %f\n", multi);
	printf("divididos: %f\n", divi);
	
	
	return 0;
}
