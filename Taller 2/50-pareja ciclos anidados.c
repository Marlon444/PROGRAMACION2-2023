#include <stdio.h>

int main() {
    int i, j, k;

    for (i = 0; i < 8; i++) {
        k = i;
        for (j = 0; j < 2; j++) {
            if (j == 0) {
                printf("%d ", k);
            } else {
                printf("%d ", k / 4 + 1);
            }
        }
        printf("\n");
    }

    return 0;
}

