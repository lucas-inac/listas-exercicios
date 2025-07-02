#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    float listas;
    float prova1;
    float prova2;
};

int main() {

    struct Aluno joao, gabriel;
    float lst, p1, p2;

    printf("Nota listas: ");
    scanf("%f", &lst);

    printf("Nota prova 1: ");
    scanf("%f", &p1);

    printf("Nota prova 2: ");
    scanf("%f", &p2);

    joao = {lst, p1, p2};

    getchar();
    return 0;
}