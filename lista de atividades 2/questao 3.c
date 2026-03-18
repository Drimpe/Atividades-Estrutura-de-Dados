#include <stdio.h>

int main (void) {
    float matriz [3][4];
    float somal [3] = {0,0,0};

    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            printf("Digite o valor da matriz [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
            somal[i]+=matriz[i][j];
        }
    }
    printf("\nElementos da Matriz\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            printf("[%.2f]", matriz[i][j]);
        }
        printf("\n");
    }
    for (int i=0; i<3; i++) {
        printf("Soma dos valores eh: %.2f \n", somal[i]);
    }
}