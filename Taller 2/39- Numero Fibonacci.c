#include <stdio.h>

int main() {
    int x = 0, y = 1, z, i;
    printf("Serie de Fibonacci hasta 10000:\n");
    printf("%d\n%d\n", x, y);
    z = x + y;
    while(z <= 10000) {
        printf("%d\n", z);
        x = y;
        y = z;
        z = x + y;
    }
    return 0;
}

