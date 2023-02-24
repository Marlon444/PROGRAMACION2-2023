#include <stdio.h>


int main(){
	
	int numero, digito, x=0;
	
	printf(" Ingrese un numero entero de tres digitos : ");
	scanf(" %d ", &numero);
	
	digito=numero%10;
	if(digito == 1){
		x=1;
	}
	 numero /=  10;
	 
	 digito = numero%10;
	 	if(digito == 1){
		x=1;
	}
	 numero /=  10;
	 
	 digito = numero%10;
	 	if(digito == 1){
		x=1;
	}
	
	if(x){
		printf("  El numero ingresado tiene el digito 1.  \n");
	}else{
		printf(" El numero ingresado no tiene el digito 1. \n");
	}
	
	return 0;
}
