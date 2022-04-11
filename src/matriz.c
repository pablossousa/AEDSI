#include "matriz.h"

int i = 0, j = 0, mat[TAM][TAM];
int vet[TAM*TAM], x = 0;

void gerarVetor() {

    for(x = 0; x < TAM*TAM; x++) {
        vet[x] = -1;
    }

}

void gerarMatriz() {
    
    srand(time(NULL));

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            mat[i][j] = rand() % 100;
        }
    }

    printf ("Matriz original: \n\n");

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
    int soma = 0, x = 0;

    soma = mat[i][j];

    vet[0] = mat[i][j];
    x++;

    printf("__________________\nSoma parcial: %d\n", soma);
    printf("\nSomado com %d\n\n", mat[i][j]);

    mat[i][j] = -1;

    for (m = 0; m < TAM; m++) {
        for (n = 0; n < TAM; n++) {
            printf("%d\t", mat[m][n]);
        }
        printf("\n");
    }

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {

            if (mat[TAM-1][TAM-1] == -1) {
                printf("\nSoma: %d", soma);
                valoresInverso();
                exit(0);
            }

            if (i == TAM - 1) {

                while (j <= TAM) {
                    soma += mat[i][j];

                    vet[x] = mat[i][j];
                    x++;

                    mat[i][j] = -1;
                    j++;
                }

                printf("__________________\nSoma parcial: %d\n", soma);
                printf("\nSomado com %d\n\n", mat[i][j]);

                for (m = 0; m < TAM; m++) {
                    for (n = 0; n < TAM; n++) {
                        printf("%d\t", mat[m][n]);
                    }
                    printf("\n");
                }

                printf("\nSoma: %d", soma);
                valoresInverso();
                exit(0);
            }
                
            if (mat[i][j + 1] > mat[i][j - 1] && mat[i][j + 1] > mat[i + 1][j] && mat[i][j + 1] != -1) {

                soma += mat[i][j + 1];

                printf("__________________\nSoma parcial: %d\n", soma);
                printf("\nSomado com %d\n\n", mat[i][j + 1]);

                vet[x] = mat[i][j + 1];
                x++;

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

                printf("__________________\nSoma parcial: %d\n", soma);
                printf("\nSomado com %d\n\n", mat[i + 1][j]);

                vet[x] = mat[i + 1][j];
                x++;

                mat[i + 1][j] = -1;

                for (m = 0; m < TAM; m++) {
                    for (n = 0; n < TAM; n++) {
                        printf("%d\t", mat[m][n]);
                    }
                    printf("\n");
                }

            }
            else if (mat[i][j - 1] > mat[i][j + 1] && mat[i][j - 1] > mat[i + 1][j] && mat[i][j - 1] != -1 && j - 1 != mat[i-1][TAM-1]) {

                soma += mat[i][j - 1];

                printf("__________________\nSoma parcial: %d", soma);
                printf("\nSomado com %d\n\n", mat[i][j - 1]);

                vet[x] = mat[i][j - 1];
                x++;
                
                mat[i][j + 1] = -1;

                for (m = 0; m < TAM; m++) {
                    for (n = 0; n < TAM; n++) {
                        printf("%d\t", mat[m][n]);
                    }
                    printf("\n");
                }

            }
        }
    }

    printf("\nSoma Final: %d", soma);

}

void valoresInverso() {

    printf("\n\nValores somados em ordem inversa: \n\n");

    for (x = TAM*TAM; x >= 0; x--) {
        if (vet[x] != -1 && vet[x] != 0) {
            printf("%d\t", vet[x]);
        }
    }

}