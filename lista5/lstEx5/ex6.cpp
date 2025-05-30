#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float eh_palindromo(char num[100]) {

    int tamanho = strlen(num);
    char numInvert[100];
    int i = 0;

    while (tamanho > 0) {
        tamanho--;
        numInvert[i] = num[tamanho];
        i++;
    }
    
    if (strcmp(num, numInvert) == 0) {
        return 1;
    }

    return 0;
}

int main() {

    char num[100];

    printf("Digite um numero para verificar se e palindromo: ");
    scanf("%s", num);

    if (eh_palindromo(num) == 1) {
        printf("\nNumero palindromo!");
    }
    else {
        printf("\nNumero nao palindromo!");
    }

    return 0;
}