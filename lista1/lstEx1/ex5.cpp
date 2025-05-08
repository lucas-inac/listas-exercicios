#include <stdio.h>
#include <stdlib.h>

int main() {

    // Escreva um programa que calcule a soma, subtração, multiplicação e divisão de ‘a’por ‘b’.

    int a;
    int b;

    int sum;
    int sub;
    int mult;
    int div;

    printf("Primeiro numero: ");
    scanf("%d", &a);

    printf("Segundo numero: ");
    scanf("%d", &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mult);
    printf("%d / %d = %d", a, b, div);

    return 0;
}