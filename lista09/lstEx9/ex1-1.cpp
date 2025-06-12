#include <stdio.h>
#include <stdlib.h>

int **alocarMatriz(int linhas, int colunas) {

    int **matriz = NULL;
    matriz = (int**) malloc(linhas * sizeof(int*));

    if (matriz == NULL)
    {
        printf("Erro de alocacao.");
        return NULL;
    }

    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int*) calloc(colunas, sizeof(int*));
    }
    
    return matriz;
}

void liberaMatriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) free(matriz[i]);
    free(matriz);
}

int **preencherMatriz(int **matriz, int linhas, int colunas) {

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("Valor %d,%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    return matriz;
}

void imprimirMatriz(int **matriz, int linhas, int colunas) {
    
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int **somaMatrizes(int **A, int **B, int linhas, int colunas) {

    int** soma = alocarMatriz(linhas, colunas);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma[i][j] = A[i][j] + B[i][j];
        }
    }

    return soma;
}

int main() {

    int **A = alocarMatriz(3, 3);
    int **B = alocarMatriz(3, 3);
    int **soma = alocarMatriz(3, 3);

    A = preencherMatriz(A, 3, 3);
    B = preencherMatriz(B, 3, 3);

    soma = somaMatrizes(A, B, 3, 3);

    imprimirMatriz(soma, 3, 3);

    liberaMatriz(A, 3);
    liberaMatriz(B, 3);
    liberaMatriz(soma, 3);

    getchar();
    return 0;
}