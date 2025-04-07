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

    // Simulação do movimento do CAVALO
    // Utiliza loops aninhados (FOR e WHILE) para simular movimentos em L
    printf("\nMovimento do Cavalo:\n");
    
    // Simulando dois movimentos em L: 2 para baixo + 1 para a esquerda
    for (int l = 0; l < 2; l++) {
        printf("Baixo\n");
    }

    int m = 0;
    while (m < 1) {
        printf("Esquerda\n");
        m++;
    }

    return 0;
}
