#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *menu = fopen("menu.txt", "r");

    if (menu == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }
    
    char linha[100];
    int dim, pedido;

    fscanf(menu, "%d", &dim);

    int cont = 0;

    printf(" ===== MENU ===== \n");

    while (fgets(linha, sizeof(linha), menu))
    {
        printf("%d. %s", cont, linha);
        cont++;
    }
    printf("\n0. Fechar menu.");

    printf("\nNumero do pedido: ");
    scanf("%d", &pedido);

    
    fclose(menu);

    getchar();
    return 0;
}