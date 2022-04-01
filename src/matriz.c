#include "matriz.h"

void gerarMatriz() {

    int i = 0, j = 0, mat[TAM][TAM];

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            mat[i][j] = rand() % 100;
        }
    }

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

}