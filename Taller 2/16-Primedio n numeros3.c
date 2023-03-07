#include <stdio.h>

int main() {
   int x, i, suma = 0;

   printf("Ingresa un numero entero: ");
   scanf("%d", &x);

   for(i = 1; i <= x; i++) {
      suma += 3 * i;
   }

   printf("El promediode los primeros %d multiplos de 3 es: %d\n", x, suma/x);

   return 0;
}

