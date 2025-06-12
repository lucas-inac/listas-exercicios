#include <stdio.h>
#include <stdlib.h>

float a, b, c;

float y(float x) {
    return a * x * x + b * x + c;
}

int main() {

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    int i = 0;

    while (i == 0)
    {
        printf("\ny(x) = %.2fx^2 + %.2fx + %.2f\n", a, b, c);

        float x;

        printf("Digite o valor de x: ");
        scanf("%f", &x);

        getchar();

        printf("\ny(%.2f) = %.2f\n", x, y(x));

        printf("\nDeseja continuar? (Sim = 0 / Nao = 1) ");
        scanf("%d", &i);
    }

    return 0;
}