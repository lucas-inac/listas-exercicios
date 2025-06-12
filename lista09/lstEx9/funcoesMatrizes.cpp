#include <stdio.h>
#include <stdlib.h>

int **alocarMatriz(int linhas, int colunas) { //exercicio 6

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

void liberaMatriz(int **matriz, int linhas) { //exercicio 7
    for (int i = 0; i < linhas; i++) free(matriz[i]);
    free(matriz);
}

int **preencherMatriz(int **matriz, int linhas, int colunas) { //exercicio 8

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

int **preencherMatrizPadrao(int **matriz, int linhas, int colunas) {

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = i + 1;
        }
    }

    return matriz;
}

void imprimirMatriz(int **matriz, int linhas, int colunas) { //exercicio 9
    
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

int **produtoMatrizes(int **A, int **B, int linhasA, int colunasA, int linhasB, int colunasB) { //exercicio 10

    if(colunasA != linhasB) {
        printf("Nao e possivel multiplicar as matrizes!");
        return NULL;
    }
    
    int **produto = alocarMatriz(linhasA, colunasB);

    for (int i = 0; i < linhasA; i++)
    {
        for (int j = 0; j < colunasB; j++)
        {
            for (int k = 0; k < colunasA; k++) //k poderia ser menor que linhasB tambem
            {
                produto[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    return produto;
}
