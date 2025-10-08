#include <stdio.h>

int main() {

    float valor, desconto = 0, total;
    float porcentagem = 0;

    printf("Digite o valor da sua compra: ");
    scanf("%f", &valor);

    if (valor <= 100.0)
        porcentagem = 0;
    else if (valor <= 500.0)
        porcentagem = 10;
    else if (valor <= 1000.0)
        porcentagem = 15;
    else
        porcentagem = 20;

    desconto = valor * (porcentagem / 100);
    total = valor - desconto;

    printf("Desconto: R$ %.2f\n", desconto);
    printf("Total a pagar: R$ %.2f\n", total);
    printf("Percentual de desconto: %.0f%%\n", porcentagem);

    return 0;
}