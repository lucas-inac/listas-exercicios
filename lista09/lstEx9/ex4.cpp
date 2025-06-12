#include <stdio.h>
#include <stdlib.h>
#include "funcoesMatrizes.cpp"

int somaDiagonal(int **matriz, int linhas) {

    int soma = 0;

    for (int i = 0; i < linhas; i++)
    {
        soma = soma + matriz[i][i];
    }

    return soma;
}

int main() {

    int **matriz = alocarMatriz(3, 3);
    matriz = preencherMatrizPadrao(matriz, 3, 3);

    int soma = somaDiagonal(matriz, 3);

    imprimirMatriz(matriz, 3, 3);

    printf("Soma da diagonal principal da matriz = %d", soma);

    liberaMatriz(matriz, 3);

    getchar();
    return 0;
}
