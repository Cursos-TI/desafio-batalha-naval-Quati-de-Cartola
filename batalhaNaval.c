#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa toda a matriz com 0

    // Posicionando navio na horizontal
    tabuleiro[2][4] = 1;
    tabuleiro[2][5] = 1;
    tabuleiro[2][6] = 1;

    // Posicionando navio na vertical
    tabuleiro[0][1] = 1;
    tabuleiro[1][1] = 1;
    tabuleiro[2][1] = 1;

    printf("TABULEIRO BATALHA NAVAL\n\n");

    // Imprimir índices da coluna (cabeçalho)
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%d ", j);
    }
    printf("\n");

    // Imprimir o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i); // Índice da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprimir cada célula do tabuleiro
        }
        printf("\n");
    }

    return 0;
}