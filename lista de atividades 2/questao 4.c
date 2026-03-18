#include <stdio.h>

int main(void) {
  int matriz[3][3];
    int maior = 0, menor = 0;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Digite um numero para posicao [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > menor) {
                maior = matriz[i][j];
            } else {
                menor = matriz[i][j];
            }
        }
    }
    printf("\n Elelemntos da MAtriz\n");
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Maior: %d \n Menor: %d", maior, menor);
}