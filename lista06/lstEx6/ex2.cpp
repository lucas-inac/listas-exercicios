#include <stdio.h>
#include <stdlib.h>

int soma(int num) {
    if (num == 1) {
        return 1;
    }
    return num + soma(num - 1);
}

int main() {

    int num;

    printf("Escolha um numero: ");
    scanf("%d", &num);

    printf("%d", soma(num));

    getchar();
    return 0;
}