#include <stdio.h>

int main(){
	
	
	int number;
	printf("Ingrese un numero para saber si es primo: ");
	scanf(" %d ", &number);
	

    if (number <= 1){
    	printf("   No es primo ");
	}
    else if (number == 2){
    	printf(" es primo ");
	}
    else if (number % 2 == 0){
    	printf(" No es primo ");
	}
       int i;    
    for (i = 3; i <= number; i++);
        if (number % i == 0){
        	printf(" No es primo ");
		}
            
    
    return 0;        
}


