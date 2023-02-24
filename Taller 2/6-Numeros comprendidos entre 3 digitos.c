#include <stdio.h>


int main(){
	
	int numero, i;
	
	printf(" Ingrese um numero de tres cifras : ");
	scanf("%d", &numero);
	
	printf(" Los enteros comprendidos entre 1 y %d son \n", numero);
	 int primero =  numero  / 100;
	 int segundo = (numero/10)%10;
	 int tercero = numero % 10;
	 
	 printf(" Entre 1 y %d: ", primero);
	 for(i = 1; i<= primero; i++){
	 	printf("%d", i);
	 }
	 
	 printf("\n");
	 printf(" Entre 1 y %d ", segundo);
	 for( i= 1; i<= segundo; i++){
	 	printf("%d", i);
	 }
	 
     printf("\n");
	 printf(" Entre 1 y %d ", tercero);
	 for( i= 1; i<= tercero; i++){
	 	printf("%d", i);
	
	
	}
	return 0;
}
