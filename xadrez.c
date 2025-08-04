#include <stdio.h>

int main()
{

    int movimentoTorreBispo = 6;
    int movimentoRainha = 8;

    // for usado para movimento da torre

    int contadorTorre = 1;

    printf("Iniciando movimento da Torre...\n");
    for (contadorTorre = 1; contadorTorre < movimentoTorreBispo; contadorTorre++)
    {
        printf("**TORRE** %d passos para Direita\n", contadorTorre);
    }

    printf("Encerrando movimento da torre...\n");

    printf("Iniciando movimento do bispo...\n");

    int contadorBispo = 1;
    // while usado para movimento bispo
    while (contadorBispo < movimentoTorreBispo)
    {
        printf("**BISPO** %d passos para Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    printf("Encerrando movimento do bispo...\n");

    // do-while usado para movimento da rainha
    printf("Iniciando movimento da Rainha...\n");

    int contadorRainha = 1;
    do
    {
        printf("**Rainha** %d passos para esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    printf("Encerrando movimento da Rainha...\n");
}