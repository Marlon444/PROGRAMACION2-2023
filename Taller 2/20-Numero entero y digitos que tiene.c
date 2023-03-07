#include <stdio.h>

int main() {
   int numero, digitos = 0;

   printf("Ingresa un numero entero: ");
   scanf("%d", &numero);

   while(numero != 0) {
      digitos++;
      numero /= 10;
   }

   printf("El numero ingresado tiene %d digitos.\n", digitos);

   return 0;
}

