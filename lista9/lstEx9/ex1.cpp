#include <stdio.h>
#include <stdlib.h>

int** somaMatrizes(int** M, int** N) {

}

int main() {

    int n = 0;
    int** prmMtz = (int**) malloc(3 * sizeof(int*));
    int** scdMtz = (int**) malloc(3 * sizeof(int*));

    for (int i = 0; i < 3; i++)
    {
        prmMtz[i] = (int*) malloc(3 * sizeof(int));
        scdMtz[i] = (int*) malloc(3 * sizeof(int));
    }
        
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            n++;
            prmMtz[i][j] = n;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            n++;
            scdMtz[i][j] = n;
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            printf("%d ", prmMtz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) free(prmMtz[i]);
    for (int i = 0; i < 3; i++) free(scdMtz[i]);

    free(prmMtz);
    free(scdMtz);

    getchar();
    return 0;
}