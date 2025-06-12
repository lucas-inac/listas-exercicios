#include <stdio.h>
#include <stdlib.h>

int main() {

    //Escreva um programa que calcule o valor fatorial dado a entrada usando laços.

    int fatorial = 1;
    int valor;

    printf("\nEscolha um valor para ser calculado seu fatorial: ");
    scanf("%d", &valor);

    int i = valor;

    while (i >= 1)
    {
        fatorial = fatorial * i;
        i--;
    }

    printf("%d! = %d", valor, fatorial);

    return 0;
}