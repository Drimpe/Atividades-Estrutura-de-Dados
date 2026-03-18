#import <stdio.h>

int main (void) {
    /*Faça um programa em C para ler os elementos de uma matriz 4 x 4 de números inteiros.
    Depois exiba os elementos da mesma na tela. Por fim mostre a soma de cada uma das 4
    colunas.*/
int matriz [4][4];
    int soma[4] = {0, 0, 0, 0};
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("Digite o numero desejado para [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
                soma[j] += matriz[i][j];
            }
        }
    printf("\n Elelemnto da Matriz\n");
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for ( int j = 0; j<4; j++) {
        printf("Soma dos valores é: %d\n", soma[j]);
    }
    }
