#include <stdio.h>
#include <stdlib.h>
#include "funcoesMatrizes.cpp"

int **produtoMatrizes3x3(int A[3][3], int B[3][3]) {

    int **produto = alocarMatriz(3,3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                produto[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return produto;
}

int main() {

    int A[3][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };
    int B[3][3] = {
        {4, 4, 4},
        {5, 5, 5},
        {6, 6, 6}
    };

    int **produto = alocarMatriz(3, 3);

    produto = produtoMatrizes3x3(A, B);

    imprimirMatriz(produto, 3, 3);

    liberaMatriz(produto, 3);

    getchar();
    return 0;
}
