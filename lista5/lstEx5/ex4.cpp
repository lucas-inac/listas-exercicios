#include <stdio.h>
#include <stdlib.h>

float eh_primo(int num) {

    int i = 2;

    while (i < num) {

        if (num % i == 0) {
            return 0;
        }

        i++;
    }
    
    return 1;
}

int main() {

    int num;

    printf("Digite um numero para verificar se e primo: ");
    scanf("%d", &num);

    if (eh_primo(num) == 0)
    {
        printf("Numero nao primo!");
    }
    else {
        printf("Numero primo!");
    }

    return 0;
}