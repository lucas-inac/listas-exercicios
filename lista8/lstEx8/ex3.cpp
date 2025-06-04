#include <stdio.h>
#include <stdlib.h>

int main() {

    int* vetor = NULL;
    int x = 0, tam = 0;
    int umInteiro = (int) sizeof(int);

    while (x != -1)
    {
        printf("%dº valor do vetor (digite -1 para parar): ", tam + 1);
        scanf("%d", &x);

        if (x != -1)
        {
            tam++;
            vetor = (int*) realloc(vetor, tam * umInteiro);
            vetor[tam - 1] = x;
        }
    }

    if (vetor == NULL)
    {
        printf("Erro de memoria!");
        return 1;
    }
    
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    getchar();
    return 0;
}