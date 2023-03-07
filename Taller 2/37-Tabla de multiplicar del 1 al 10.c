#include <stdio.h>

int main() {
    int num, i;
    
    for (num = 1; num <= 10; num++) {
        printf("Tabla de multiplicar del %d:\n", num);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("\n");
    }
    
    return 0;
}

