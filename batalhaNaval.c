#include <stdio.h>

// Algumas constantes
#define LINHAS    10
#define COLUNAS   10
#define MAX_NAVIOS 3 // Quantidade de casas no máximo que um navio pode preencher
#define MENSAGEM "TABULEIRO BATALHA NAVAL"

int main() {
    int tabuleiro[LINHAS][COLUNAS] = {0}; // Inicializa toda a matriz com 0

    printf("%s\n", MENSAGEM);
    printf("=======================\n\n");

    // Imprimir índices da coluna, de A-J como uma planilha do excel
    printf("   ");
    for (int j = 0; j < LINHAS; j++) {
        printf("%c ", 'A' + j); // Sp,amdo um caractere com J, fazendo ele seguir um padrão de A - J
    }
    printf("\n");

    // Preenchendo a horizontal principal com navios
    for (int i = 0; i < MAX_NAVIOS; i++) {
        tabuleiro[i][i] = 3;
    }
    // Preenchendo a horizontal da direita para a esquerda com navios
    for (int i = 0; i < MAX_NAVIOS; i++) {
        tabuleiro[i][COLUNAS - 1 - i] = 3;
    }

    // Imprimir o tabuleiro
    for (int i = 0; i < LINHAS; i++) {

        printf("%d  ", i); // Índice da linha

        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprimir cada célula do tabuleiro
        }
        printf("\n");
    }

    return 0;
}