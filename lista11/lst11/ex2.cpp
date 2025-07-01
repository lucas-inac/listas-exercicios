#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double arredondaCasas(double valor, int casas = 0) {

    double fator = 1;

    for (int i = 0; i < casas; i++)
    {
        fator *= 10;
    }

    return((double)(int)(valor * fator + 0.5)/fator);
}

int main(int argc, char *argv[]) {

    if (argc != 2)
    {
        printf("Usuario nao digitou argumentos suficientes ou digitou argumentos excedentes.");
        return 1;
    }

    double valor = atof(argv[1]);

    printf("%f\n", arredondaCasas(valor, 3));

    getchar();
    return 0;
}
