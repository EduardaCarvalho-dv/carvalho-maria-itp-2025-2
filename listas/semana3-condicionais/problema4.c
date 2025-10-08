#include <stdio.h>

int main() {

    char jogador1, jogador2;

    printf("Jogador 1: escolha sua jogada (P/A/T): ");
    scanf(" %c", &jogador1);

    printf("Jogador 2: escolha sua jogada (P/A/T): ");
    scanf(" %c", &jogador2);

    if (jogador1 == jogador2)
        printf("Empate!\n");
    else if ((jogador1 == 'P' && jogador2 == 'T') || (jogador1 == 'A' && jogador2 == 'P') || (jogador1 == 'T' && jogador2 == 'A'))
        printf("Jogador 1 venceu!\n");
    else
        printf("Jogador 2 venceu!\n");

    return 0;
}