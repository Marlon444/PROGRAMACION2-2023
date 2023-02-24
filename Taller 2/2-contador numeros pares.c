#include <stdio.h>

int main (){
	
	int num;
	printf("Ingrese un numero entero: ");
	scanf("%d", &num);
	
	 int i=0;
	while(i+2<=num){
		printf("%d \n", i);
		i++;
	}
	return 0;
	}
	
