#include <stdio.h>

int main() {
    // ===============================
    // Movimentando a TORRE (for loop)
    // ===============================
    // Torre anda em linha reta (horizontal ou vertical).
    // Vamos simular a Torre andando 5 casas para a direita.
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (casa %d)\n", i);
    }
    printf("\n");

    // ===============================
    // Movimentando o BISPO (while loop)
    // ===============================
    // Bispo anda em diagonal.
    // Vamos simular o Bispo andando 5 casas para cima e para a direita.
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do BISPO:\n");
    while (i <= casasBispo) {
        printf("Cima, Direita (casa %d)\n", i);
        i++;
    }
    printf("\n");

    // ===============================
    // Movimentando a RAINHA (do-while loop)
    // ===============================
    // Rainha pode se mover em todas as direções.
    // Vamos simular a Rainha andando 8 casas para a esquerda.
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da RAINHA:\n");
    do {
        printf("Esquerda (casa %d)\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n");

    // ===============================
    // Movimentando o CAVALO (loops aninhados)
    // ===============================
    // O Cavalo se move em "L": duas casas em uma direção e depois uma casa perpendicular.
    // Aqui, ele vai se mover duas casas para BAIXO e uma casa para a ESQUERDA.
    // Vamos usar loops aninhados: um 'for' e um 'while'.

    int casasBaixo = 2;     // Movimento vertical (para baixo)
    int casasEsquerda = 1;  // Movimento horizontal (para a esquerda)
    int k = 1;

    printf("Movimento do CAVALO:\n");

    // Primeiro loop 'for' controla as duas casas para baixo
    for (int passo = 1; passo <= casasBaixo; passo++) {
        printf("Baixo (casa %d)\n", passo);
    }

    // Depois usamos um loop 'while' para o movimento lateral (uma casa à esquerda)
    while (k <= casasEsquerda) {
        printf("Esquerda (casa final %d)\n", k);
        k++;
    }

    // Finaliza o programa
    return 0;
}
