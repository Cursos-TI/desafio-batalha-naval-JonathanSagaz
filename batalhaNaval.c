#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    int tabuleiro[5][5] = {0};

    int colunaNavioVertical = 1; // posicionando o navio na vertical
    for (int i = 1; i < 4; i++)
    {
        tabuleiro[i][colunaNavioVertical] = 3;
    }

    int linhaNavioHorizontal = 3; // posicionando o navio da horizontal
    for (int j = 2; j < 5; j++)
    {
        tabuleiro[linhaNavioHorizontal][j] = 3;
    }

    printf("Coordenadas dos navios: \n");
    printf("Navio vertical: \n");

    for (int i = 1; i < 4; i++)
    { 
        printf("(%d, %d)\n", i, colunaNavioVertical);
    }

    printf("Navio horizontal: \n");
    for (int j = 2; j < 5; j++)
    {
        printf("(%d, %d)\n", linhaNavioHorizontal, j);
    }

    printf("Tabuleiro com os navios posicionados: \n"); // exibe o tabuleiro
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        { 
            printf("%d", tabuleiro[i][j]);
        }
        printf("\n");
    } 

    return 0;
} 
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
