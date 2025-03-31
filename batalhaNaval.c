#include <stdio.h>

// Algumas constantes
#define LINHAS   10
#define COLUNAS  10
#define MENSAGEM "TABULEIRO BATALHA NAVAL"

int main() {
    int tabuleiro[LINHAS][COLUNAS]; // Inicializa toda a matriz com 0

    printf("%s\n", MENSAGEM);

    // Imprimir índices da coluna, de A-J como uma planilha do excel
    printf("   ");
    for (int j = 0; j < LINHAS; j++) {
        printf("%c ", 'A' + j); // Sp,amdo um caractere com J, fazendo ele seguir um padrão de A - J
    }
    printf("\n");

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