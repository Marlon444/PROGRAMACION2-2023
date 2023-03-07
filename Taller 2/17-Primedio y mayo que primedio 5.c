#include <stdio.h>

int main() {
   int numero1, numero2, i, suma2 = 0, suma5 = 0;
   float promediode2, promediode5;

   printf("Ingresa la cantidad de multiplos de 2: ");
   scanf("%d", &numero1);

   printf("Ingresa la cantidad de multiplos de 5: ");
   scanf("%d", &numero2);

   for(i = 1; i <= numero1; i++) {
      suma2 += 2 * i;
   }

   promediode2 = (float) suma2 / numero1;

   for(i = 1; i <= numero2; i++) {
      suma5 += 5 * i;
   }

   promediode5 = (float) suma5 / numero2;

   if(promediode2 > promediode5) {
      printf("El promedio de los primeros %d multiplos de 2 es mayor que el promedio de los primeros %d multiplos de 5.\n", numero1, numero2);
   } else {
      printf("El promedio de los primeros %d multiplos de 2 no es mayor que el promedio de los primeros %d multiplos de 5.\n", numero1, numero2);
   }

   return 0;
}

