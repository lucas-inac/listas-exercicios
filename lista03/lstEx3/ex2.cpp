#include <stdio.h>
#include <stdlib.h>

int main() {

    // Escreva um programa que calcule se a entrada é primo ou não.

    int num;
    bool primo = true;

    printf("\nEscreva um numero para verificar se é primo ou nao: ");
    scanf("%d", &num);

    int i = num;

    while (i > 2)
    {
        i--;

        int resto = num % i;

        if (resto == 0) {
            primo = false;
            break;
        } 
    }

    if (primo == true) {
        printf("Numero primo!");
    }
    else {
        printf("Numero nao primo!");
    }

    return 0;
}