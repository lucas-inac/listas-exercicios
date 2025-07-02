#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double arredondaCasas(double valor, int casas = 0) {

    double fator = 1;

    if (casas == 0)
    {
        char *str;
        sprintf(str, "%.20f", valor);

        char *ponto = strchr(str, '.');

        ponto++; //avança um dígito depois do ponto

        while (*ponto >= '0' && *ponto <= '9') 
        {    
            casas++;
            ponto++;
        }
    }

    for (int i = 0; i < casas; i++)
    {
        fator *= 10;
    }

    return((double)(int)(valor * fator + 0.5)/fator);
}

int main(int argc, char *argv[]) {

    if (argc != 2)
    {
        printf("Usuario digitou argumentos insuficientes ou excedentes.");
        return 1;
    }

    double valor = atof(argv[1]);

    printf("%f\n", arredondaCasas(valor, 3));

    getchar();
    return 0;
}
