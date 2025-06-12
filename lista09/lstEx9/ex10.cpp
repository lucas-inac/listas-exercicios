#include <stdio.h>
#include <stdlib.h>
#include "funcoesMatrizes.cpp"

int main() {

    int linhasA, colunasA;
    int linhasB, colunasB;

    printf("Quantidade de linhas da Matriz A: ");
    scanf("%d", &linhasA);
    printf("Quantidade de colunas da Matriz A: ");
    scanf("%d", &colunasA);

    printf("Quantidade de linhas da Matriz B: ");
    scanf("%d", &linhasB);
    printf("Quantidade de colunas da Matriz B: ");
    scanf("%d", &colunasB);

    //exercicio 6
    int **A = alocarMatriz(linhasA, colunasA);
    int **B = alocarMatriz(linhasB, colunasB);

    int **produto = alocarMatriz(linhasA, colunasB);

    //exercicio 8
    A = preencherMatriz(A, linhasA, colunasB);
    B = preencherMatriz(B, linhasB, colunasB);

    produto = produtoMatrizes(A, B, linhasA, colunasA, linhasB, colunasB);

    //exercicio 7
    imprimirMatriz(produto, linhasA, colunasB);

    liberaMatriz(A, linhasA);
    liberaMatriz(B, linhasB);
    liberaMatriz(produto, linhasA);

    getchar();
    return 0;
}
