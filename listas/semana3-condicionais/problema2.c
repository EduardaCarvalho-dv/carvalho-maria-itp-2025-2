#include <stdio.h>

int main() {

    float consumo, total;
    char tipo;

    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumo);

    printf("Digite o tipo de consumidor (R/C/I): ");
    scanf(" %c", &tipo);

    total = 15.0; //taxa fixa

    if (tipo == 'R' || tipo == 'r')
        total += consumo * 0.60;
    else if (tipo == 'C' || tipo == 'c')
        total += consumo * 0.48;
    else if (tipo == 'I' || tipo == 'i')
        total += consumo * 1.29;
    else {
        printf("Tipo de consumidor invalido! \n");
        return 0;
    }

    printf("Valor total da conta: R$ %.2f\n", total);

    return 0;
}
