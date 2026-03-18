#include <stdio.h>

int main() {
    int mat[4][4];
    int i, j;

    printf("Preencha a matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\n--- Matriz Completa ---\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Elementos Abaixo da Diagonal Principal ---\n");
    for(i = 1; i < 4; i++) {
        for(j = 0; j < i; j++) { 
            printf("[%d][%d] = %d\n", i, j, mat[i][j]);
        }
    }

    return 0;
}
