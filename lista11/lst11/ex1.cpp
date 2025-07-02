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
    bool primo;

    for (int i = ini; i < fim; i++)
    {
        primo = true;
        if (i <= 1) {
            primo = false;
        }
        else {
            for (int j = 2; j < i && primo == true; j++)
            {
                if (i % j == 0)
                {
                    primo = false;
                }
            }
        }
        if (primo == true) {
            printf("%d ", i);
        }
    }

    getchar();
    return 0;
}
