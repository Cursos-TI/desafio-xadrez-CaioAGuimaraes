#include <stdio.h>

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
    // Bispo com recursão e loops aninhados
    printf("Movimentos do Bispo:\n");
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            moverBispoRec(5);
        }
    }
    printf("\n");

    // Torre
    printf("Movimentos da Torre:\n");
    moverTorreRec(5);
    printf("\n");

    // Rainha
    printf("Movimentos da Rainha:\n");
    moverRainhaRec(8);
    printf("\n");

    // Cavalo: L para cima/direita, com condições múltiplas
    printf("Movimentos do Cavalo (L para cima/direita):\n");
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