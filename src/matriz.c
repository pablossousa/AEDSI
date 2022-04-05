#include "matriz.h"

int i = 0, j = 0, mat[TAM][TAM];

void gerarMatriz() {

    srand(time(NULL));

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

void percorrerMatriz() {

    i = 0, j = 0;
    int m = 0, n = 0;
    int soma = 0;

    soma = mat[i][j];

    mat[i][j] = -1;

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            //if (i == pos_i && j == pos_j) {
                if (mat[i][j + 1] > mat[i][j - 1] && mat[i][j + 1] > mat[i + 1][j] && mat[i][j + 1] != -1) {

                    soma += mat[i][j + 1];

                    printf("\nSoma parcial: %d\n\n\n", soma);

                    mat[i][j + 1] = -1;

                    for (m = 0; m < TAM; m++) {
                        for (n = 0; n < TAM; n++) {
                            printf("%d\t", mat[m][n]);
                        }
                        printf("\n");
                    }

                }
                else if (mat[i + 1][j] > mat[i][j + 1] && mat[i + 1][j] > mat[i][j - 1] && mat[i + 1][j] != -1) {

                    soma += mat[i + 1][j];

                    printf("\nSoma parcial: %d\n\n\n", soma);

                    mat[i + 1][j] = -1;

                    for (m = 0; m < TAM; m++) {
                        for (n = 0; n < TAM; n++) {
                            printf("%d\t", mat[m][n]);
                        }
                        printf("\n");
                    }

                }
                else if (mat[i][j - 1] > mat[i][j + 1] && mat[i][j - 1] > mat[i + 1][j] && mat[i][j - 1] != -1) {

                    soma += mat[i][j - 1];

                    printf("\nSoma parcial: %d\n\n\n", soma);

                    mat[i][j + 1] = -1;

                    for (m = 0; m < TAM; m++) {
                        for (n = 0; n < TAM; n++) {
                            printf("%d\t", mat[m][n]);
                        }
                        printf("\n");
                    }

                }
            //}
        }
    }
a
    printf("\nSoma: %d", soma);

}