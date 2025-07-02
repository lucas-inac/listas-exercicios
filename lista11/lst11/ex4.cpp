#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *arquivo = fopen("matriz.txt", "r");

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    int dim;
    fscanf(arquivo, "%d", &dim);

    int matrizA[dim][dim], matrizB[dim][dim], resultado[dim][dim];

    for(int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            fscanf(arquivo, "%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            fscanf(arquivo, "%d", &matrizB[i][j]);
        }
    }
    
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("Soma das matrizes:\n");

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    

    fclose(arquivo);

    getchar();
    return 0;
}