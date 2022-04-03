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
    int pos_i = 0, pos_j = 0;
    int soma = 0;
    
    if (mat[i][j+1] > mat[i+1][j]) {
        pos_i = i;
        pos_j = j+1;
    } else {
        pos_i = i+1;
        pos_j = j;
    }

    soma = mat[i][j];

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (i == pos_i && j == pos_j) {
                if (mat[pos_i][pos_j+1] > mat[pos_i+1][pos_j] && mat[pos_i][pos_j+1] > mat[pos_i][pos_j-1]) {
                    
                    soma += mat[pos_i][pos_j+1];

                    pos_i = i;
                    pos_j = j+1;

                } else if (mat[pos_i+1][pos_j] > mat[pos_i][pos_j+1] && mat[pos_i+1][pos_j] > mat[pos_i][pos_j-1]) {
                   
                    soma += mat[pos_i+1][pos_j];

                    pos_i = i+1;
                    pos_j = j;

                } else if (mat[pos_i][pos_j-1] > mat[pos_i][pos_j+1] && mat[pos_i][pos_j-1] > mat[pos_i+1][pos_j]) {
                    
                    soma += mat[pos_i][pos_j-1];

                    pos_i = i+1;
                    pos_j = j;

                }
            }
        }
    }
    
    printf("Soma: %d", soma);

    // int pos_direita = 0, pos_baixo = 0, pos_esquerda = 0;
    // int nova_posicao = 0;
    // int m = 0, n = 0, cont = 0;
    // int soma = 0;

    // pos_direita = mat[m][n+1];
    // pos_esquerda = mat[m][n-1];
    // pos_baixo = mat[m+1][n];

    // while (cont < TAM*TAM) {
            
    

    //     if (pos_direita > pos_baixo && pos_direita > pos_esquerda) {

    //         nova_posicao = mat[m][n+1];

    //         soma += pos_direita;

    //     } else if (pos_baixo > pos_direita && pos_baixo > pos_esquerda) {

    //         nova_posicao = mat[m+1][n];

    //         soma += pos_baixo;

    //     } else if (pos_esquerda > pos_direita && pos_esquerda > pos_baixo) {

    //         nova_posicao = mat[m][n-1];

    //         soma += pos_esquerda;

    //     }



    //     cont++;

    // }

    // printf("Soma: %d", soma);

}