#include <stdio.h>

// Algumas constantes
#define LINHAS    10
#define COLUNAS   10
#define MAX_NAVIOS 3 // Quantidade de casas no máximo que um navio pode preencher
#define MENSAGEM "TABULEIRO BATALHA NAVAL"
// Definindo o tamanho da matriz de habilidade (5x5)
#define TAM_HABILIDADE 5

int main() {

    int intervalo_vertical      = 1;
    int deslocamento_horizontal = 1;
    int centro = TAM_HABILIDADE / 2;

    int tabuleiro[LINHAS][COLUNAS] = {0}; // Inicializa toda a matriz com 0 para não dar erro
    // Efeitos especiais e matrizes
        int octaedro[TAM_HABILIDADE][TAM_HABILIDADE] = {0}; 
        int cone[TAM_HABILIDADE][TAM_HABILIDADE]     = {0};
        int cruz[TAM_HABILIDADE][TAM_HABILIDADE]     = {0};

    printf("%s\n", MENSAGEM);
    printf("=======================\n\n");

    // Imprimir índices da coluna, de A-J como uma planilha do excel
    printf("   ");
    for (int j = 0; j < LINHAS; j++) {
        printf("%c ", 'A' + j); // Sp,amdo um caractere com J, fazendo ele seguir um padrão de A - J
    }
    printf("\n");

    /// Loops de preenchimento de navios na diagonal
    // DA ESQUERDA PARA A DIREITA
    for (int i = 0; i < MAX_NAVIOS; i++) {

        // Definição de posição do barco
            int x = i + intervalo_vertical;
            int y = i + deslocamento_horizontal;

        // Limitando o barco no tabuleiro
        if (x < LINHAS && y >= 0 && y < COLUNAS) {
            tabuleiro[x][y] = 3;
        }
    }
    // DA DIREITA PARA A ESQUERDA
    for (int i = 0; i < MAX_NAVIOS; i++) {
        
        // Definição de posição do barco
            int x = i + intervalo_vertical;
            int y = (COLUNAS - 1 - i) - deslocamento_horizontal;
        
        // Limitando o barco no tabuleiro
        if (x < LINHAS && y >= 0 && y < COLUNAS) {
            tabuleiro[x][y] = 3;
        }
    }

    // O cone se expande para baixo
    for (int i = 0; i < TAM_HABILIDADE; i++) {

        for (int j = 0; j < TAM_HABILIDADE; j++) {

            if (j >= centro - i && j <= centro + i) {
                cone[i][j] = 1;
            }
        }
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