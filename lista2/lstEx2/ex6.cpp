#include <stdio.h>
#include <stdlib.h>

int main() {

    // Escreva um programa que dado os lados de um triângulo classifique seu tipo (equilátero, isósceles, escaleno ou inválido).

    int lado1;
    int lado2;
    int lado3;

    printf("Primeiro lado: ");
    scanf("%d", &lado1);

    printf("Segundo lado: ");
    scanf("%d", &lado2);

    printf("Terceiro lado: ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado1 == lado3) {
        printf("Triangulo equilatero!\n");
        printf("Todos os lados iguais.");
    }
    else if (((lado1 + lado2) <= lado3) || ((lado1 + lado3) <= lado2) || ((lado2 + lado3) <= lado1)) {
        printf("Triangulo invalido!\n");
        printf("Soma de dois lados quaisquer menor que outro lados qualquer.");
    }
    else if ((lado1 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado1 != lado2) || (lado2 == lado3 && lado1 != lado2)) {
        printf("Triangulo isoceles!\n");
        printf("Dois lados iguais.\n");
        printf("Soma de dois lados quaisquer maior que outro lado qualquer.");
    }
    else {
        printf("Triangulo escaleno!\n");
        printf("Todos os lados diferentes.\n");
        printf("Soma de dois lados quaisquer maior que outro lado qualquer.");
    }

    return 0;
}