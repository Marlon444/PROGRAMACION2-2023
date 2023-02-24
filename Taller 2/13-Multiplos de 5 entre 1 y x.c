#include <stdio.h>

int main(){
		
	int x,y=1;
	printf("Multiplos de 5 entre 1 y el numero que pongas : \n");
	printf("Ingresa un numero entero : ");
	scanf("%d", &x);
	
	int i;
	for(i<=y+1;i<x;i++){
		if(i%5==0){
		printf("Los multiplos de 5 son: \n");
		printf(" %d \n", i);
		}
	}
	return 0;
}
