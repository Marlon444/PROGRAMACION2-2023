#include <stdio.h>

int main() {
    int i, j, k;

    k = 0;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 2; j++) {
            if (j == 0) {
                printf("%d ", k);
            } else {
                printf("%d ", k / 2 + 1);
            }
            k++;
        }
        printf("\n");
    }

    return 0;
}

