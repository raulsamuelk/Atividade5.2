#include <stdio.h>

void dobra(int *v, int n) {
    for (int i = 0; i < n; i++) {
        v[i] = v[i] * 2;
    }
}

int main(void) {
    int v[5] = {1, 2, 3, 4, 5};

    dobra(v, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d", v[i]);
        if (i < 4) {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
