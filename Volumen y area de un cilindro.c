#include <stdio.h>

int main(){
	
	
	float H,R, volumen,area;
	printf("Ingrese la altura del cilindro: ");
	scanf("%f", &H);
	printf("Ingrese el radio del cilindro : ");
	scanf("%f", &R);
	
	volumen = 3.141592*R*R*H;
	area = 2*3.141592*R*(R+H);
	
	printf("El volumen del cilindro es: %f\n", volumen);
	printf("El area del cilindro es: %f\n", area);
	
	return 0;
}
