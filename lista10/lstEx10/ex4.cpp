#include <stdio.h>
#include <stdlib.h>

int *alocarVetor(int tamanho) {

    int *vetor = NULL;
    vetor = (int*) malloc(tamanho * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro de alocacao.");
        return NULL;
    }

    return vetor;
}

int *preencherVetor(int *vetor, int tamanho) {

    printf("Preencha o vetor:\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("vetor[%d] = ", i);
        scanf("%d", &vetor[i]);
    }
    
    return vetor;
}

void imprimirVetor(int *vetor, int tamanho) {

    printf("\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
}

int *realocarVetor(int *vetor, int tamanho) {

    vetor = (int*) realloc(vetor, tamanho * sizeof(int));

    return vetor;
}

int main() {

    int tamanho;

    printf("Tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = alocarVetor(tamanho);

    vetor = preencherVetor(vetor, tamanho);

    imprimirVetor(vetor, tamanho);

    tamanho = tamanho / 2;

    realocarVetor(vetor, tamanho);

    imprimirVetor(vetor, tamanho);

    free(vetor);

    getchar();
    return 0;
}
