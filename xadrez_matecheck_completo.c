#include <stdio.h>

#define PASSOS_BISPO 5
#define PASSOS_TORRE 5
#define PASSOS_RAINHA 8

void moverBispoRec(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRec(passos - 1);
}

void moverTorreRec(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorreRec(passos - 1);
}

void moverRainhaRec(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainhaRec(passos - 1);
}

int main() {
    // --- Nível Novato ---
    printf("=== Nível Novato ===\n");
    printf("Movimentos do Bispo:\n");
    for (int i = 0; i < PASSOS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");
    printf("Movimentos da Torre:\n");
    int t = 0;
    while (t < PASSOS_TORRE) {
        printf("Direita\n");
        t++;
    }
    printf("\n");
    printf("Movimentos da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < PASSOS_RAINHA);
    printf("\n");

    // --- Nível Aventureiro ---
    printf("\n=== Nível Aventureiro ===\n");
    printf("Movimentos do Cavalo (L para baixo/esquerda):\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        int j = 0;
        while (j < 1 && i == 1) {
            printf("Esquerda\n");
            j++;
        }
    }
    printf("\n");

    // --- Nível Mestre ---
    printf("=== Nível Mestre ===\n");
    printf("Movimentos do Bispo (Recursivo):\n");
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            moverBispoRec(5);
        }
    }
    printf("\n");
    printf("Movimentos da Torre (Recursivo):\n");
    moverTorreRec(5);
    printf("\n");
    printf("Movimentos da Rainha (Recursivo):\n");
    moverRainhaRec(8);
    printf("\n");
    printf("Movimentos do Cavalo (L para cima/direita, múltiplas condições):\n");
    int i, j;
    for (i = 0, j = 0; i < 2 || j < 1; ) {
        if (i < 2) {
            printf("Cima\n");
            i++;
            continue;
        }
        if (j < 1) {
            printf("Direita\n");
            j++;
        }
        break;
    }
    return 0;
}