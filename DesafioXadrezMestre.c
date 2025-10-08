#include <stdio.h>

// ===============================
// FUNÇÕES RECURSIVAS
// ===============================

// ---- TORRE ----
// Move 5 casas para a direita usando recursividade
void moverTorre(int casa, int limite) {
    if (casa > limite) return; // condição de parada
    printf("Direita (casa %d)\n", casa);
    moverTorre(casa + 1, limite); // chamada recursiva
}

// ---- BISPO ----
// Move 5 casas na diagonal superior direita
// Usa recursão + loops aninhados para simular movimento duplo (vertical e horizontal)
void moverBispo(int vertical, int limiteVertical, int limiteHorizontal) {
    if (vertical > limiteVertical) return; // condição de parada da recursão

    for (int horizontal = 1; horizontal <= limiteHorizontal; horizontal++) {
        printf("Cima, Direita (movimento V%d-H%d)\n", vertical, horizontal);
    }

    moverBispo(vertical + 1, limiteVertical, limiteHorizontal); // próxima linha da diagonal
}

// ---- RAINHA ----
// Move 8 casas para a esquerda com recursividade simples
void moverRainha(int casa, int limite) {
    if (casa > limite) return;
    printf("Esquerda (casa %d)\n", casa);
    moverRainha(casa + 1, limite);
}

// ===============================
// FUNÇÃO PRINCIPAL
// ===============================
int main() {
    printf("=== NIVEL MESTRE - MOVIMENTOS DE XADREZ ===\n\n");

    // ===============================
    // Movimentando a TORRE (recursividade)
    // ===============================
    printf("Movimento da TORRE:\n");
    moverTorre(1, 5);
    printf("\n");

    // ===============================
    // Movimentando o BISPO (recursão + loops aninhados)
    // ===============================
    printf("Movimento do BISPO:\n");
    moverBispo(1, 5, 1); // move 5 casas na diagonal
    printf("\n");

    // ===============================
    // Movimentando a RAINHA (recursividade)
    // ===============================
    printf("Movimento da RAINHA:\n");
    moverRainha(1, 8);
    printf("\n");

    // ===============================
    // Movimentando o CAVALO (loops aninhados complexos)
    // ===============================
    printf("Movimento do CAVALO:\n");

    // Movimento em "L": duas casas para CIMA e uma para DIREITA
    // Usando loops aninhados e controle de fluxo (break / continue)
    int movVertical = 2;
    int movHorizontal = 1;

    for (int i = 1, j = 1; i <= movVertical; i++, j++) {
        if (i == 2 && j == 1) {
            // Exemplo de uso de continue
            // (aqui apenas para demonstrar o controle de fluxo)
            continue; 
        }
        printf("Cima (casa %d)\n", i);

        // Loop interno controlando o movimento lateral
        for (int k = 1; k <= movHorizontal; k++) {
            if (i == movVertical && k == movHorizontal) {
                printf("Direita (casa final %d)\n", k);
                break; // interrompe o loop ao completar o movimento em “L”
            }
        }
    }

    printf("\n=== Fim da simulacao de movimentos ===\n");
    return 0;
}
