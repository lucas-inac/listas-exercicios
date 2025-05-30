#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    Escreva um programa que realize a soma de dois números “quebrados” que são dados de entrada pelo usuário
    (usa-se %f para caracteres que representam pontos flutuantes e separa-se com “.” ponto as casas decimais).
    */ 

    float num1;
    float num2;

    float soma;

    printf("Primeiro numero quebrado: ");
    scanf("%f", &num1);

    printf("Segundo numero quebrado: ");
    scanf("%f", &num2);

    soma = num1 + num2;

    printf("Soma = %f", soma);

    return 0;
}