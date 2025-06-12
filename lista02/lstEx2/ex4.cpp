#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    Considere uma nação onde para se aposentar é preciso no mínimo 65 anos de vida, ou 30 de serviços,
    ou então 60 anos de vida com 25 de serviços. Escreva um programa para verificar se pode-se aposentar,
    utilizando-se de operadores lógicos.
    */

    int idade;
    int anosServico;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o seu tempo de servico: ");
    scanf("%d", &anosServico);

    if (idade >= 65 || anosServico >= 30 || (idade >= 60 && anosServico >= 25)) {
        printf("Pode se aposentar!");
    }
    else {
        printf("Nao pode se aposentar!");
    }

    return 0;
}