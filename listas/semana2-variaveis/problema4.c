#include <stdio.h>

int main(void) {

    int primeiroNumero, segundoNumero;
    float divisao, media;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &segundoNumero);

    divisao = (float)primeiroNumero / segundoNumero;
    media = (primeiroNumero + segundoNumero) / 2.0;

    printf("Soma = %d\n", primeiroNumero + segundoNumero);
    printf("Diferença = %d\n", primeiroNumero - segundoNumero);
    printf("Produto = %d\n", primeiroNumero * segundoNumero);
    printf("Divisão = %.2f\n", divisao);
    printf("Resto = %d\n", primeiroNumero % segundoNumero);
    printf("Média = %.2f\n", media);

    return 0;
}