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

    printf("\n--- Matriz Original ---\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n--- Elementos Acima da Diagonal Principal ---\n");
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 4; j++) {
            printf("[%d][%d] = %d\n", i, j, mat[i][j]);
        }
    }

    return 0;
}
