#include <stdio.h>

int main(){
	
	
	int numero ; 
	printf("Ingrese un numero entero: \n");
	scanf("%d", &numero);
	
	for(int i = 1; i<= numero; i++){
		if(i%2==0){
			printf("Par  %d\n", i);
		}
		
	}
	return 0;
	
}
