#include <stdio.h>
//NIVEL AVENTUREIRO 
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

    // ---------- Cavalo (for + while) ----------
    printf("\nMovimento do Cavalo:\n");
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    for (int k = 0; k < movimentosBaixo; k++) {
        printf("Baixo\n");
    }

    int l = 0;
    while (l < movimentosEsquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
