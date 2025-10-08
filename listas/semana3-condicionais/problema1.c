#include <stdio.h>

int main() {

    float peso, altura, imc;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC = %.2f\n", imc);

    if (imc < 18.5)
        printf("Abaixo do peso\n");
    else if (imc < 25.0)
        printf("Peso normal\n");
    else if (imc < 30.0)
        printf("Sobrepeso\n");
    else
        printf("Obesidade\n");

    return 0;
}
