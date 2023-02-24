#include <stdio.h>

int main(){
		
	int x=20,y=200, i;
	printf("Los numeros pares entre 2 y 200 : \n");
	
	for(i<=x+3;i<y;i++){
		if(i%2==0){
		
		printf(" %d \n", i);
		}
	}
	return 0;
}
