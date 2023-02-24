#include <stdio.h>

int main(){
		
	int x,y;
	printf("Multiplos de 5 entre dos numeros que pongas : \n");
	printf("Ingresa el primer numero entero : ");
	scanf("%d", &x);
	printf("Ingrese el otro numero : ");
	scanf(" %d ", &y);
	
	int i;
	for(i=x+1;i<y;i++){
		if(i%5==0){
		printf("Los multiplos de 5 son: \n");
		printf(" %d \n", i);
		}
	}
	return 0;
}
