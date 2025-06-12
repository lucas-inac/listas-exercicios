#include <stdio.h>
#include <stdlib.h>

float circunferencia, area;
float pi = 3.1415;

float calcular_circulo(float *raio) {

    circunferencia = 2 * pi * *raio;
    area = pi * (*raio * *raio);

    return 0;
}

int main() {

    float raio;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    calcular_circulo(&raio);

    printf("\nCircunferencia = %.2f\n", circunferencia);
    printf("Area = %.2f", area);

    return 0;
}