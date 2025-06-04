#include <stdio.h>

int main() {
    // DESAFIO - NÍVEL NOVATO

    // Declarando a Matriz
    int oceano [10] [11] = {
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    char linha[11] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K'};

    // Navio na horizontal
    for (int nav1 = 2; nav1 < 5; nav1++) {
    oceano[1][nav1] = 3;
    }

    // Navio na vertical
    for (int nav2 = 8; nav2 > 5; nav2--) {
    oceano[nav2][8] = 3;
    }

    // Mostrando o campo
    for (int letra = 0; letra < 11; letra++) {
        printf("%c   ", linha[letra]); }
        printf("\n");
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 10; j++) {
            printf("%d   ", oceano[i][j]);
        }
        printf("\n");
    }

    return 0;
}