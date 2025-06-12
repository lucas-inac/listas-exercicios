#include <stdio.h>
#include <stdlib.h>

float celsius_para_farenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {

    float celsius;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    printf("Temperatura em farenheit: %.2f", celsius_para_farenheit(celsius));

    return 0;
}