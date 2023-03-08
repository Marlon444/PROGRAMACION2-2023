#include <stdio.h>

int main() {
    int i, j, k;

    k = 1;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 3; j++) {
            if (j == 1) {
                printf("%d ", k);
            } else if (j == 2) {
                printf("%d ", (k - 1) % 3 + 1);
            } else {
                printf("%d ", (k - 1) / 3 + 1);
            }
            k++;
        }
        printf("\n");
    }

    return 0;
}

