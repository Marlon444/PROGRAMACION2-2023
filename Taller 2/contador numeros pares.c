#include <stdio.h>


int main(){
	
	
	int num;
	printf("Ingrese un numero entero: \n");
	scanf("%d", &num);
	
	for(int i = 1; i <=num; i++);{
		if(i%2==0){
			printf("par %d\n", i);
		}
	}
	return 0;
}
