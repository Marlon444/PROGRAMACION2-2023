#include <stdio.h>

int main (){
	
	int num;
	printf("Ingrese un numero entero: ");
	scanf("%d", &num);
	
	 int i=1;
	while(i<=num){
		printf("%d \n", i);
		i++;
	}
	return 0;
	}
	
