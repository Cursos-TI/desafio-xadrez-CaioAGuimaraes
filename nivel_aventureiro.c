#include <stdio.h>

int main() {
    printf("Movimentos do Cavalo (L para baixo/esquerda):\n");
    for (int i = 0; i < 2; i++) { // Dois passos para baixo
        printf("Baixo\n");
        int j = 0;
        while (j < 1 && i == 1) { // Só depois do segundo passo
            printf("Esquerda\n");
            j++;
        }
    }
    return 0;
}