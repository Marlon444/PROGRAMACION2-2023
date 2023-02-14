#include <stdio.h> 

int main(){
	
	float num1,bits,gigabytes;
	printf("Ingrese la cantidad de kilobytes que desee transformar en bits o en gigabytes:");
	scanf("%f", &num1);
	
	bits =  num1/1000000;
	gigabytes =  num1*8000;
	
	printf("tienes un total de: %f bits \n", bits);
	printf("tienes un total de:  %f bits\n", gigabytes);
	
	return 0;
	
	
	
}
