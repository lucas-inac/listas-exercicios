#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    Escreva um programa de calculadora que realiza operações básicas (soma, subtração, multiplicação e divisão)
    com dois números inteiros, controlado por um menu interativo.
    */

    int num1;
    int num2;
    int result;

    int i;

    printf("Primeiro numero: ");
    scanf("%d", &num1);

    printf("Segundo numero: ");
    scanf("%d", &num2);

    while (i <= 4)
    {
        printf("\nEscolha o tipo de operacao:\n\n");

        printf("1: Adicao\n");
        printf("2: Subtracao\n");
        printf("3: Multiplicacao\n");
        printf("4: Divisao\n");

        printf("\nPara sair, aperte '5'\n");

        printf("Entrada: ");
        scanf("%d", &i);

        if (i == 1) {
            result = num1 + num2;
            printf("\n%d + %d = %d\n", num1, num2, result);
        }
        if (i == 2) {
            result = num1 - num2;
            printf("\n%d - %d = %d\n", num1, num2, result);
        }
        if (i == 3) {
            result = num1 * num2;
            printf("\n%d * %d = %d\n", num1, num2, result);
        }
        if (i == 4) {
            result = num1 / num2;
            printf("\n%d / %d = %d\n", num1, num2, result);
        }
    }

    return 0;
}