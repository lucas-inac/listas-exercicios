#include <stdio.h>
#include <stdlib.h>

int filtraPares(int *V, int n) {

    int *S = NULL;
    int contador = 0, j = 0;

    for (int i = 0; i < n; i++)
    {
        if (V[i] % 2 == 0)
        {
            contador++;
        }
    }

    S = (int*) malloc(contador * sizeof(int));

    if (S == NULL) return NULL;

    for (int i = 0; i < n; i++)
    {
        if (V[i] %2 == 0)
        {
            S[j] = V[i];
            j++;
        }
    }

    return(*S);
}

int main() {

    int *V = NULL, *S = NULL;
    int qnt, j = 0;
    int umInteiro = (int) sizeof(int);

    printf("Tamanho do vetor: ");
    scanf("%d", &qnt);

    V = (int*) malloc(qnt * umInteiro);
    S = (int*) malloc(qnt * umInteiro);

    if (V == NULL || S == NULL)
    {
        printf("Erro de memoria!");
        return 1;
    }

    for (int i = 0; i < qnt; i++)
    {
        printf("%dº valor do vetor: ", i + 1);
        scanf("%d", &V[i]);

        if (V[i] % 2 == 0)
        {
            S[j] = V[i];
            j++;
        }
        
    }

    printf("Valores pares: ");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", V[i]);
    }
    
    free(V);
    free(S);

    getchar();
    return 0;
}