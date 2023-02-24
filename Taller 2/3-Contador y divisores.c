#include <stdio.h>

int main(){
	
	int numero, x = 1;
	
	printf("Ingrese un numero entero : ");
	scanf("%d", &numero);
	
	printf("Sus divisibles son: %d ", x);
	int i=1;
	for(i<= numero; i++;){
		
		if(numero%i==0){
			printf(" %d ", i);
			x++;
		}
	}
	printf("\n"),
	printf("tiene %d divisores \n", x);
	
	
}
