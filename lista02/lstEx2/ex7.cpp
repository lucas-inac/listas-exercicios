#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    Desenhe um fluxograma para verificar se o aluno aprovou, reprovou ou ficou em recuperação
    (considere o exemplo das páginas 15 e 16).
    */

    // Fluxograma em pdf na pasta "fluxograma", nomeado "ex7.pdf".

    float nota;

    printf("Nota final aluno: ");
    scanf("%f", &nota);

    if (nota < 5) {
        if (nota < 3) {
            printf("Aluno reprovado!");
        }
        else {
            printf("Aluno em recuperação!");
        }
    }
    else {
        printf("Aluno aprovado!");
    }

    return 0;
}