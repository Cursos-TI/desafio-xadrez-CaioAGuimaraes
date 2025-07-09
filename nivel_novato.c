#include <stdio.h>

#define PASSOS_BISPO 5
#define PASSOS_TORRE 5
#define PASSOS_RAINHA 8

int main() {
    // Bispo: Diagonal superior direita (Cima + Direita)
    printf("Movimentos do Bispo:\n");
    for (int i = 0; i < PASSOS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Torre: Para a direita
    printf("Movimentos da Torre:\n");
    int t = 0;
    while (t < PASSOS_TORRE) {
        printf("Direita\n");
        t++;
    }
    printf("\n");

    // Rainha: Para a esquerda
    printf("Movimentos da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < PASSOS_RAINHA);

    return 0;
}