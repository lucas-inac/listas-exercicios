#include <stdio.h>
#include <stdlib.h>

int main() {

    int* vetor = NULL;
    int qnt, umInteiro;

    umInteiro = (int) sizeof(int);

    printf("Tamanho do vetor: ");
    scanf("%d", &qnt);

    vetor = (int*) malloc(qnt * umInteiro);

    if (vetor == NULL)
    {
        printf("Erro de memoria!");
        return 1;
    }

    for (int i = 0; i < qnt; i++)
    {
        vetor[i] = i + 1;
        printf("%d ", vetor[i]);
    }
    
    free(vetor);

    getchar();
    return 0;
}