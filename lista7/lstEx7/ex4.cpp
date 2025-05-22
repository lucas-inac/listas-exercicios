#include <stdio.h>
#include <stdlib.h>

void imprimeIguais(int *a, int *b, int t) {

    for (int i = 0; i <= t; i++) {

        for (int j = t; j >= 0; j--) {
            
            if (a[i] == b[j]) {
                printf("%d ", b[j]);
            }
        }
    }
}

int main() {

    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 3, 5, 7, 9};

    imprimeIguais(a, b, 4);

    getchar();
    return 0;
}