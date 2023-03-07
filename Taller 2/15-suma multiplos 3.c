#include <stdio.h>

int main() {
   int i, suma = 0;

   for(i = 1; i <= 20; i++) {
      suma += 3 * i;
   }

   printf("El resultado de sumar los primeros 20 multiplos de 3 es: %d\n", suma);

   return 0;
}

