#include <stdio.h>
#include <stdlib.h>

int main() {

    int a[5] = {1, 3, 5, 7, 9};
    int b[5] = {2, 4, 6, 8 ,10};

    for (int i = 0; i < 5; i++) {
        printf("%d %d ", a[i], b[i]);
    }

    getchar();
    return 0;
}