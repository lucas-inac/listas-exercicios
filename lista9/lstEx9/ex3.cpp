#include <stdio.h>
#include <stdlib.h>
#include "funcoesMatrizes.cpp"

int verificaValor(int **matriz, int linhas, int colunas, int valor) {

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] == valor)
            {
                printf("Valor esta presente na matriz.");
                return 1;
            }
        }
    }
    printf("Valor nao esta presente na matriz.");

    return 0;
}

int main() {

    int **matriz = alocarMatriz(3, 3);
    preencherMatriz(matriz, 3, 3);

    int valor;

    printf("Escolha um valor: ");
    scanf("%d", &valor);

    verificaValor(matriz, 3, 3, valor);

    liberaMatriz(matriz, 3);

    getchar();
    return 0;
}
