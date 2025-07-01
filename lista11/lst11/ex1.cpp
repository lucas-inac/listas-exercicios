#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    if (argc != 3)
    {
        printf("Usuario nao digitou argumentos suficientes ou digitou argumentos excedentes.");
        return 1;
    }

    int ini = atoi(argv[1]);
    int fim = atoi(argv[2]);
    int primo;

    for (int i = ini; i < fim; i++)
    {
        primo = 1;
        if (i <= 1) {
            primo = 0;
        }
        else {
            for (int j = 2; j < i && primo == 1; j++)
            {
                if (i % j == 0)
                {
                    primo = 0;
                }
            }
        }
        if (primo == 1) {
            printf("%d ", i);
        }
    }

    getchar();
    return 0;
}
