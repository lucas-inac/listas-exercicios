#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist;

float distancia(float x1, float y1, float x2, float y2) {

    float xd = (x2 - x1) * (x2 - x1);
    float yd = (y2 - y1) * (y2 - y1); 

    dist = xd + yd;
    dist = sqrt(dist);

    return 0;
}

int main() {

    float x1, y1;
    float x2, y2;

    printf("Primeiro valor de x: ");
    scanf("%f", &x1);

    printf("Primeiro valor de y: ");
    scanf("%f", &y1);

    printf("\nSegundo valor de x: ");
    scanf("%f", &x2);

    printf("Segundo valor de y: ");
    scanf("%f", &y2);

    distancia(x1, y1, x2, y2);

    printf("\nDistancia entre os pontos (%.2f, %.2f) e (%.2f, %.2f) = %.2f", x1, y1, x2, y2, dist);

    return 0;
}