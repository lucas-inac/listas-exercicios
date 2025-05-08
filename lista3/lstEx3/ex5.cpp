#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    Escreva um programa que calcule uma cadeia de fibonacci até n.
    Ex se n == 20: 0, 1, 1, 2, 3, 5, 8, 13 (21 já é maior que n)
    */

    int antecessor = 0;
    int atual = 0;
    int sucessor;

    int limite;

    printf("Escolha o limite para a sequencia de fibonacci: ");
    scanf("%d", &limite);

    while (atual <= limite)
    {
        printf("%d, ", atual);

        sucessor = atual + antecessor;
        antecessor = atual;
        atual = sucessor;

        if (atual == 0) {
            atual++;
        }
    }

    return 0;
}