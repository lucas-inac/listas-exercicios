#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int random;
    srand(time(NULL));

    random = rand() % 12 + 1;
    printf("Numero aleatorio: %d", random);

    getchar();
    return 0;
}