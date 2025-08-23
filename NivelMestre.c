#include <stdio.h>
//NIVEL MESTRE

// ---------- Função recursiva para a Torre ----------
void moverTorre(int passos) {
    if (passos <= 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// ---------- Função recursiva para o Bispo com loops aninhados ----------
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0) return;

    for (int i = 0; i < horizontal; i++) {
        printf("Cima, Direita\n");
    }

    moverBispo(vertical - 1, horizontal);
}

// ---------- Função recursiva para a Rainha ----------
void moverRainha(int passos) {
    if (passos <= 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// ---------- Movimento complexo do Cavalo ----------
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int movimentosCima = 2;
    int movimentosDireita = 1;

    for (int i = 0; i < 3; i++) { // loop externo fictício para simular múltiplos movimentos
        for (int j = 0; j < movimentosCima + movimentosDireita; j++) {
            if (j < movimentosCima) {
                printf("Cima\n");
                continue;
            }

            if (j == movimentosCima) {
                printf("Direita\n");
                break;
            }
        }
    }
}

int main() {
    int movimentoTorre = 5;
    int movimentoBispoVertical = 3;
    int movimentoBispoHorizontal = 2;
    int movimentoRainha = 8;

    // ---------- Torre ----------
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre);

    // ---------- Bispo ----------
    printf("\nMovimento do Bispo:\n");
    moverBispo(movimentoBispoVertical, movimentoBispoHorizontal);

    // ---------- Rainha ----------
    printf("\nMovimento da Rainha:\n");
    moverRainha(movimentoRainha);

    // ---------- Cavalo ----------
    moverCavalo();

    return 0;
}
