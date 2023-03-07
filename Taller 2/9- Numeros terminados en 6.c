#include <stdio.h>

int main() {
   int numero = 26;

   while(numero >= 26 && numero <= 205) {
      if(numero % 10 == 6) {
         printf("%d ", numero);
      }
      numero++;
   }

   return 0;
}
