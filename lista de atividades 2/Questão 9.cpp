#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j;

    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n--- Matriz Completa ---\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Elementos fora da Diagonal Principal ---\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i != j) {
                printf("%d ", mat[i][j]);
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }

    printf("\n--- Elementos fora da Diagonal Secundaria ---\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(i + j != 2) {
                printf("%d ", mat[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
