#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça vai se mover
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // --- Movimento da Torre (5 casas para a Direita) usando FOR ---
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    // --- Movimento do Bispo (5 casas na Diagonal: Cima Direita) usando WHILE ---
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < movimentoBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // --- Movimento da Rainha (8 casas para a Esquerda) usando DO-WHILE ---
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < movimentoRainha);

    return 0;
}

