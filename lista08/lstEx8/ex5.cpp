#include <stdio.h>
#include <stdlib.h>

int main() {

    int *vetor;

    vetor = (int*) calloc(9, sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro de memoria!");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", vetor[i * 3 + j]);
        }
        printf("\n");
    }

    free(vetor);

    getchar();
    return 0;
}