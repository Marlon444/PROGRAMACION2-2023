#include <stdio.h>

int main(){
	
	float Pesos,comversion1,comversion2;
	printf("Comvertidor de pesos colombianos a dolar y euro.\n");
	printf("Ingrese una cantidad de pesos colombianos : ");
	scanf("%f", &Pesos);
	
    comversion1 = Pesos/4799;
	comversion2 = Pesos/5000;
	
	printf("Usted tiene la cantidad de: %f dolares\n ",comversion1);
    printf("Usted tiene la cantidad de: %f  euros\n ",comversion2 );
	
	return 0;
}
