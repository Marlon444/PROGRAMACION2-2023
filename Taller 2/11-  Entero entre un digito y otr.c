#include <stdio.h>

int main() {
   int numero, entero1, entero2;

   printf("Ingresa un numero entero de dos digitos: ");
   scanf("%d", &numero);

   entero1 = numero / 10;
   entero2 = numero % 10;

   if(entero1 < entero2) {
      while(entero1 <= entero2) {
         printf("%d ", entero1);
         entero1++;
      }
   } else {
      while(entero2 <= entero1) {
         printf("%d ", entero2);
         entero2++;
      }
   }

   return 0;
}

