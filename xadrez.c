#include <stdio.h>

int main() {
    // Simulação do movimento da TORRE (5 casas para a direita)
    // Usamos estrutura de repetição FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do BISPO (5 casas na diagonal para cima e à direita)
    // Usamos estrutura de repetição WHILE
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Simulação do movimento da RAINHA (8 casas para a esquerda)
    // Usamos estrutura de repetição DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}
