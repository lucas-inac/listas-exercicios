#include <stdio.h>
#include <stdlib.h>

int qntDig(int num) {
    if (num < 10) {
        return 1;
    }
    num = num / 10;

    return 1 + qntDig(num);
}

int main() {

    int num;

    printf("Digite um numero natural: ");
    scanf("%d", &num);

    printf("Quantidade de digitos: %d", qntDig(num));

    getchar();
    return 0;
}