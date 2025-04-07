#include <stdio.h>

// Função recursiva para mover a Torre (direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo (diagonal para cima e à direita)
// Utiliza loops aninhados
void moverBispo(int casas) {
    if (casas == 0) return;

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// Função recursiva para mover a Rainha (esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do cavalo: 1 L para cima e à direita
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    // loop com múltiplas variáveis e condições
    for (int i = 0, j = 2; i < 3 && j >= 0; i++, j--) {
        if (i == 0 && j == 2) continue; // só pra ilustrar uso do continue

        if (i == 1 && j == 1) {
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            break; // movimento completo em L, encerramos
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\n");
    moverCavalo();

    return 0;
}
