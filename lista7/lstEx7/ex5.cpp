#include <stdio.h>
#include <stdlib.h>

void inverteVetor(int *valor, int t) {
    
    int *ini, *fim, temp;

    ini = valor;
    fim = valor + t;

    while (ini < fim) {
        
        temp = *ini;
        *ini = *fim;
        *fim = temp;

        ini++;
        fim--;
    }
    
}

int main() {

    int vetor[5] = {1, 2, 3, 4, 5};
    int tamanho = 4;
    
    inverteVetor(vetor, tamanho);

    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    getchar();
    return 0;
}