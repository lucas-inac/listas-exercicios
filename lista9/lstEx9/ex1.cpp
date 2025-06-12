#include <stdio.h>
#include <stdlib.h>
#include "funcoesMatrizes.cpp"

int **somaMatrizes3x3(int A[3][3], int B[3][3]) {

    int **C = NULL;
    C = (int**) malloc(3 * sizeof(int*));

    if (C == NULL)
    {
        printf("Erro de memoria.");
        return NULL;
    }

    for (int i = 0; i < 3; i++)
    {
        C[i] = (int*) calloc(3, sizeof(int));
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    return C;
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

    int **soma = NULL;
    soma = (int**) malloc(3 * sizeof(int*));

    if (soma == NULL)
    {
        printf("Erro de memoria.");
        return 1;
    }
    
    for (int i = 0; i < 3; i++)
    {
        soma[i] = (int*) calloc(3, sizeof(int));
    }
    
    soma = somaMatrizes3x3(A, B);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }

    liberaMatriz(soma, 3);

    getchar();
    return 0;
}
