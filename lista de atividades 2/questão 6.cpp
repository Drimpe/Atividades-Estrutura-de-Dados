#include <stdio.h>

int main() {
    int mat[4][4];
    int i, j;

    printf("Digite os elementos da matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Posicao [%d][%d]: ", i, j);
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

    printf("\n--- Diagonal Secundaria ---\n");
    for(i = 0; i < 4; i++) {
        printf("%d ", mat[i][3 - i]);
    }

    printf("\n");
    return 0;
}
