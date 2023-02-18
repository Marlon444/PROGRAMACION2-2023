#include <stdio.h>

int main(){
	
	float metros, centimetros, kilometros;
	printf("Imgrese una cantidad de metros: ");
	scanf("%f", &metros);
	
	centimetros = metros*100/1;
	kilometros  = metros/1000;
	
	printf("La cantidad de centimetros que hay en los metros es: %f\n", centimetros);
	printf("La distancia de metros en kilometros es: %f",kilometros);
	
	return 0;
}
