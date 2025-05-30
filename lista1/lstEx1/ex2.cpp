#include <stdio.h>
#include <stdlib.h>

int main() {

    // Use incremento para realizar o exercício anterior com apenas duas variáveis.

    int num1Soma;
    int num2;

    printf("Primeiro numero inteiro: ");
    scanf("%d", &num1Soma);

    printf("Segundo numero inteiro: ");
    scanf("%d", &num2);

    num1Soma = num1Soma + num2;

    printf("Soma = %d", num1Soma);

    return 0;
}