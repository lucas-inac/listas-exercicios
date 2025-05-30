#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    // Use a biblioteca <math.h> e o método pow(base, expoente) para refazer o exercício anterior.

    float raio;

    float area;
    float pi = 3.1415;

    printf("Raio do circulo: ");
    scanf("%f", &raio);

    area = pi * pow(raio, 2);

    printf("Area = %.2f", area);

    return 0;
}