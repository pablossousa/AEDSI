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

    // int pos_direita = 0, pos_baixo = 0;
    // int m = 0, n = 0, cont = 0;

    // while (cont < TAM*TAM) {
            
    //     pos_direita = mat[m][n+1];
    //     pos_baixo = mat[m+1][n];

    //     printf("direita: %d ", pos_direita);
    //     printf("baixo: %d\n", pos_baixo);

    //     if (pos_direita > pos_baixo) {

                

    //     } else {



    //     }

    //     cont++;

    // }


}