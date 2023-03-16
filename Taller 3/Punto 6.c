#include <stdio.h>

int num_rango(int entero){
	if( entero <= 255 && entero>=0 ){
	return 1;
	}else{
     return 0;
	}
}

int main(){
	
	int x;
	printf("Escriba un numero entero para verificar si esta entre 0 y 255 ");
	scanf("%d", &x);
	
	if( num_rango(x) ){
		printf(" Esta dentro del rango ");
	}else{
	printf("No esta dentro del rango ");
	}
	
	return 0;
}
