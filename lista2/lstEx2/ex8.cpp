#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // Escreva um programa que verifique se o triângulo dado é retângulo.

    int lado1;
    int lado2;
    int lado3;

    printf("Primeiro lado: ");
    scanf("%d", &lado1);

    printf("Segundo lado: ");
    scanf("%d", &lado2);

    printf("Terceiro lado: ");
    scanf("%d", &lado3);

    if ((lado1 * lado1 + lado2 * lado2 == lado3 * lado3) || (lado1 * lado1 + lado3 * lado3 == lado2 * lado2) || (lado2 * lado2 + lado3 * lado3 == lado1 * lado1)) {
        printf("Triangulo retangulo!");
    }
    else {
        printf("Triangulo nao retangulo!");
    }

    return 0;
}