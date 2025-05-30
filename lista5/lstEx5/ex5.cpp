#include <stdio.h>
#include <stdlib.h>

float imc;

float calcula_imc(float peso, float altura) {
    
    imc = peso / (altura * altura);

    return 0;
}

void imprima_imc(float peso, float altura) {

    calcula_imc(peso, altura);

    if (imc < 18.5) {
        printf("\nIndice de Massa Corporal: Magreza (%.2f).", imc);
    }
    else if (imc < 25) {
        printf("\nIndice de Massa Corporal: Saudavel (%.2f)", imc);
    }
    else if (imc < 30) {
        printf("\nIndice de Massa Corporal: Sobrepeso (%.2f)", imc);
    }
    else {
        printf("\nIndice de Massa Corporal: Obesidade (%.2f)", imc);
    }
}

int main() {

    float peso, altura;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    imprima_imc(peso, altura);

    return 0;
}