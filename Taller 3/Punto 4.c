#include <stdio.h>

int Ascii(char c){
	return(int)c;
}

int main(){
	
	char c = '?';
	int x = Ascii(c);
	printf(" El caracter de '%c' en la tabla de ASCII es el numero %d ",c,x);
	
	return 0;
}
