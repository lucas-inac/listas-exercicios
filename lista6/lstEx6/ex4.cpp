#include <stdio.h>
#include <stdlib.h>

int calcExpoente(int base, int expoente) {
    if (expoente <= 0) {
        return 1;
    }
    if (expoente == 1) {
        return base;
    }

    return base * calcExpoente(base, expoente - 1);
}

int main() {

    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("\n%d ^ %d = %d", base, expoente, calcExpoente(base, expoente));

    getchar();
    return 0;
}