#include <stdio.h>
#include <stdlib.h>

int main() {

    //  Escreva um pseudocódigo (português extruturado) para verificar se aluno passou de ano (considere 3 avaliações de mesmo peso).

    /*
    var decimal: nota1;
    var decimal: nota2;
    var decimal: nota3;

    var decimal: media;

    escreva("Primeira nota: ");
    leia(var nota1);

    escreva("Segunda nota: ");
    leia(var nota2);

    escreva("Terceira nota: ");
    leia(var nota3);

    media = (nota1 + nota2 + nota3) / 3;

    escreva("Media = 'var media'")

    se (media < 5) {
        escreva("Reprovado!");
    }
    se nao {
        escreva("Aprovado!")
    }
    */

    float nota1;
    float nota2;
    float nota3;

    float media;

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    printf("Terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Media = %.2f\n", media);

    if (media < 5) {
        printf("Reprovado!");
    }
    else {
        printf("Aprovado!");
    }

    return 0;
}