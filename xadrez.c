#include <stdio.h>

int main() {
   
    printf("--- Movimento da Torre ---\n");
    int casasTorre = 5; // Número de casas que a Torre irá mover
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção para cada casa percorrida
    }
    printf("\n"); 

    printf("--- Movimento do Bispo ---\n");
    int casasBispo = 5; // Número de casas que o Bispo irá mover
    int i = 0;           // contador para o loop while
    while (i < casasBispo) {
        printf("Cima, Direita\n");
        i++; // Incrementa o contador
    }
    printf("\n"); 

    printf("--- Movimento da Rainha ---\n");
    int casasRainha = 8; // Número de casas que a Rainha irá mover
    int j = 0;          // contador para o loop do-while
    if (casasRainha > 0) { // Executa somente se houver movimentos a fazer
        do {
            printf("Esquerda\n"); // Imprime a direção
            j++;                  // Incrementa o contador
        } while (j < casasRainha);
    }
    printf("\n");
 
    printf("--- Movimento do Cavalo ---\n");
    int movimentosL = 2; // Simula 2 movimentos em L para demonstração
    for (int k = 0; k < movimentosL; k++) {
        printf("Realizando Movimento em L #%d:\n", k + 1);

        // Primeira parte do "L": 2 casas para baixo (usando um loop while)
        int passosBaixo = 2;
        int countBaixo = 0;
        while (countBaixo < passosBaixo) {
            printf("Baixo\n");
            countBaixo++;
        }
        printf("Esquerda\n");
        printf("\n"); 
    }
    printf("\n"); 

    return 0;
}

