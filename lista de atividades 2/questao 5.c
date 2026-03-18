#include <stdio.h>
int main () {
    int matriz[4][4];
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("Digite o numero para posicao [i][j]", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n Elelmentos da Matriz \n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
    printf ("Diagonal principal: %d,  %d,  %d,  %d", matriz[0][0], matriz[1][1], matriz[2][2], matriz[3][3]);
}