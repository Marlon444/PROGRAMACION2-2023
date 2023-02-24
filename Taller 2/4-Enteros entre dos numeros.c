#include <stdio.h>

int main (){
	
	int numero1, numero2,i;
	printf("Ingrese dos numeros enteros :  \n");
	scanf("%d", &numero1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &numero2);
	
   for(i=numero1+1;i<numero2;i++){
   	printf(" %d ", i);
   }
	
	return 0;
}
