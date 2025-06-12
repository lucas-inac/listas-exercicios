#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    Escreva um programa que calcule até o n-ésimo termo de uma cadeia de fibonacci.
    O termo seguinte de uma cadeia de fibonacci equivale a soma dos dois termos anteriores.
    Ex de cadeia: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, …
    */

    int antecessor = 0;
    int atual = 0;
    int sucessor;

    while (atual < 10000)
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