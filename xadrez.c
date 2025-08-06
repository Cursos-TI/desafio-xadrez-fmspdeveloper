#include <stdio.h>

// função para movimentos da torre
void torre(int movimentoTorreDireita)
{

    int contadorTorre = 1;
    for (contadorTorre = 1; contadorTorre <= movimentoTorreDireita; contadorTorre++)
    {
        printf("**TORRE** %d passos para Direita\n", contadorTorre);
    }
}
// função para movimentos do bispo

void bispo(int movimentoBispoCima, int movimentoBispoDireita)
{

    int contadorBispo = 1;
    int movimentos = movimentoBispoCima > movimentoBispoDireita ? movimentoBispoCima : movimentoBispoDireita;
    // while usado para movimento bispo

    for (contadorBispo = 1; contadorBispo <= movimentos; contadorBispo++)
    {
        if (contadorBispo <= movimentoBispoCima)
        {
            printf("**BISPO** %d/%d passos para Cima \n", contadorBispo, movimentoBispoCima);
        }
        if (contadorBispo <= movimentoBispoDireita)
        {
            printf("**BISPO** %d/%d passos para Direita\n", contadorBispo, movimentoBispoDireita);
        }
    }
}

// função para movimentos da rainha
void rainha(int movimentoRainhaEsquerda)
{
    int contadorRainha = 1;
    for (contadorRainha = 1; contadorRainha <= movimentoRainhaEsquerda; contadorRainha++)
    {
        printf("**Rainha** %d passos para esquerda\n", contadorRainha);
    }
}

// função para movimentos do cavalo
void cavalo(int movimentoCavaloCima, int movimentoCavaloDireita)
{

    int contadorCavalocima;
    for (contadorCavalocima = 1; contadorCavalocima <= movimentoCavaloCima; contadorCavalocima++)
    {
        for (contadorCavalocima = 1; contadorCavalocima <= movimentoCavaloCima; contadorCavalocima++)
        {
            printf("**Cavalo** %d passos para Cima\n", contadorCavalocima);
        }
    }

    int contadorCavalodireita = 1;
    while (contadorCavalodireita <= movimentoCavaloDireita)
    {
        printf("**Cavalo** %d passos para Direita\n", contadorCavalodireita);
        contadorCavalodireita++;
    }
}

int main()
{

    printf("Iniciando movimento da Torre...\n");

    int movimentoTorreDireita;
    printf("Digite quantas casas para direita\n");
    scanf("%d", &movimentoTorreDireita); // entrada de dados torre

    torre(movimentoTorreDireita); // funcao da torre

    printf("Encerrando movimento da torre...\n");

    printf("Iniciando movimento do bispo...\n");

    int movimentoBispoCima, movimentoBispoDireita;

    printf("Digite quantas casas para cima\n");
    scanf("%d", &movimentoBispoCima); // entrada de dados bispo

    printf("Digite quantas casas para direita\n");
    scanf("%d", &movimentoBispoDireita); // entrada de dados bispo

    bispo(movimentoBispoCima, movimentoBispoDireita); // funcao do bispo

    printf("Encerrando movimento do bispo...\n");

    printf("Iniciando movimento da Rainha...\n");

    int movimentoRainhaEsquerda;
    printf("Digite quantas casas para esquerda!\n");
    scanf("%d", &movimentoRainhaEsquerda); // entrada de dados rainha
    rainha(movimentoRainhaEsquerda);       // funcao da rainha

    printf("Encerrando movimento da Rainha...\n");

    printf("Iniciando movimento do cavalo...\n");

    int movimentoCavaloCima, movimentoCavaloDireita;
    printf("Quantas casas para cima?\n"); // entrada de dados cavalo
    scanf("%d", &movimentoCavaloCima);
    printf("Quantas casas para direita?\n"); // entrada de dados cavalo
    scanf("%d", &movimentoCavaloDireita);

    cavalo(movimentoCavaloCima, movimentoCavaloDireita); // funcao do cavalo

    printf("encerrando movimento do cavalo...\n");

    return 0;
}