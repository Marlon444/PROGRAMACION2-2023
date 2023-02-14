#include <stdio.h>

int main (){
	
	float radio, volumen, area;
	printf(" Porfavor ingrese el radio de la esfera : ");
	scanf("%f", &radio);
	
	volumen = ((4/3)*3.141592*(radio*radio*radio));
	area = 4*3.141592*(radio*radio);
	
	printf("El volumen  de la esfera es : %f\n", volumen);
    printf("El area de la esfera es: %f\n ", area);
    
    return 0;
}
