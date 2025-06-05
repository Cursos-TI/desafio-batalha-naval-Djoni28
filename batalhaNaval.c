#include <stdio.h>


int main() {
    // DESAFIO - NÍVEL INTERMEDIÁRIO

    // Declarando a Matriz
    int oceano [10] [10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    char coluna[11] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Vetor que irá definir a coluna
    int linha[10] = {0}; // Vetor que irá definir a linha

    for (int x = 0; x < 10; x++) {
        linha[x] = x + 1;
    }

    // Navio na horizontal
    for (int nav1 = 2; nav1 < 5; nav1++) {
    oceano[1][nav1] = 3;
    }

    // Navio na vertical
    for (int nav2 = 8; nav2 > 5; nav2--) {
    oceano[nav2][8] = 3;
    }

    // Navio na Diagonal
    for( int k = 0; k < 3; k++) {
        oceano[7+k][3+k] = 3;
    }

    for( int k = 0; k < 3; k++) {
        oceano[5+k][2-k] = 3;
    }

    // Mostrando o campo
    for (int letra = 0; letra <= 10; letra++) {
        printf("%c   ", coluna[letra]); }
        printf("\n");

        for (int i = 0; i <= 9; i++) {
        printf("%d  ", linha[i]);
            for (int j = 0; j <= 9; j++) {
                printf("%d   ", oceano[i][j]);
            }
            printf("\n");
        }
    return 0;
}