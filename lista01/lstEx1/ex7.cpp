#include <stdio.h>
#include <stdlib.h>

int main() {

    // Escreva um programa que calcule a área de um círculo dado seu raio.

    float raio;

    float area;
    float pi = 3.1415;

    printf("Raio do circulo: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("Area = %.2f", area);

    return 0;
}