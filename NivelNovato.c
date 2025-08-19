#include <stdio.h>
//NIVEL NOVATO
int main() {
    
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // ---------- Torre (for) ----------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // ---------- Bispo (while) ----------
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= movimentoBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // ---------- Rainha (do-while) ----------
    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= movimentoRainha);

    return 0;
}
