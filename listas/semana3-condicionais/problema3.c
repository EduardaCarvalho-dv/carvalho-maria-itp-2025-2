#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media, notaFinal;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;
    printf("Media = %.2f\n", media);

    if (media >= 7.0)
        printf("Aprovado\n");
    else if (media < 4.0)
        printf("Reprovado\n");
    else {
        printf("Em recuperacao\n");
        notaFinal = (5.0 * 2) - media;
        printf("Precisa tirar %.2f na prova final para ser aprovado.\n", notaFinal);
    }

    return 0;
}
