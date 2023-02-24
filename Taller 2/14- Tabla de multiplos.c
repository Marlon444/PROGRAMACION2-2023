#include <stdio.h>

int main(){
	
	int multiplicacion, numero, x=1;
	 printf("Ingrese el numero que desee ver sus multiplos: ");
	 scanf("%d", &numero);
	 
	 printf("Los multiplos de %d son : \n", numero);
	 do{
	 	
	 	multiplicacion=numero*x;
	 	
	 	printf(" %d  \n", multiplicacion);
	 	x++;
	 }
	
	while(x<=20);
	
	return 0;
}
