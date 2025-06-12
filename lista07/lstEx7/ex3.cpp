#include <stdio.h>
#include <stdlib.h>

int verifica(int vetor[5], int valor) {
    
    for (int i = 0; i < 5; i++)
    {
        if (valor == vetor[i]) {
            printf("Valor presente no vetor!");
            return 1;
        }
        
    }
    printf("Valor nao presente no vetor!");
    return 0;
}

int main() {

    int vetor[5] = {1, 2, 3, 4, 5};
    int valor;

    printf("Valor que gostaria de verificar: ");
    scanf("%d", &valor);

    verifica(vetor, valor);

    getchar();
    return 0;
}