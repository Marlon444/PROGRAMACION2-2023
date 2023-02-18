#include  <stdio.h>

int main(){
	
	
	int altura;
	printf("Ingrese la altura del triangulo:  ");
	scanf("%d", &altura);
	
	int base;
	printf("Ingrese la base del triangulo: ");
	scanf("%d", &base);
	
	printf("El area del triangulo es: %d ", base*altura/2 );
	
	return 0;
}
