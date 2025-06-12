#include <stdio.h>
#include <stdlib.h>
#include "funcoesMatrizes.cpp"

int **matrizTransposta3x3(int matriz[3][3]) {
    int **transposta = alocarMatriz(3, 3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposta[i][j] = matriz[j][i];
        }
    }
    
    return transposta;
}

int main() {

    int matriz[3][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };
    int **transposta = alocarMatriz(3, 3);

    transposta = matrizTransposta3x3(matriz);

    imprimirMatriz(transposta, 3, 3);

    liberaMatriz(transposta, 3);

    getchar();
    return 0;
}
