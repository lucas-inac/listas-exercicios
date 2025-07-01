#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void gerarCartela(FILE *arquivo) {

    fprintf(arquivo, "B, I, N, G, O\n");
    for (int i = 0; i < 5; i++)
    {
        fprintf(arquivo, "%d, ", (rand() % 15) + 1);
        fprintf(arquivo, "%d, ", (rand() % 15) + 16);

        if (i == 2) fprintf(arquivo, "FREE, ");
        else fprintf(arquivo, "%d, ", (rand() % 15) + 31);

        fprintf(arquivo, "%d, ", (rand() % 15) + 46);
        fprintf(arquivo, "%d\n", (rand() % 15) + 51);
    }
    
}

int main() {

    srand(time(NULL));

    FILE *arquivo = fopen("bingo.csv", "w");

    if (arquivo)
    {
        gerarCartela(arquivo);
        fclose(arquivo);
    }
    else return 1;
    
    getchar();
    return 0;
}
