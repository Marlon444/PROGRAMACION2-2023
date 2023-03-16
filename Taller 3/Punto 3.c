#include <stdio.h>

char Ascii(int x){
	return(char)x;
}

int main(){
	int x;
	char c =Ascii(x);
	printf(" Ingrese un numero para ver el caracter perteneciente a la tabla de ASCII ");
	scanf("%d", &x);
	
	printf("El numero %d en la tabla ASCII es el caracter '%c' \n", x,c);
	
	
	
	return 0;
}
