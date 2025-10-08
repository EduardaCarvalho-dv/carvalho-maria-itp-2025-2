#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, maior;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Forma um triangulo.\n");

        //classificando pelos lados
        if (a == b && b == c)
            printf("Equilatero\n");
        else if (a == b || b == c || a == c)
            printf("Isosceles\n");
        else
            printf("Escaleno\n");

        //classificando pelos ângulos
        if (a > b && a > c)
            maior = a;
        else if (b > c)
            maior = b;
        else
            maior = c;

        float somaQuadrados = pow(a,2) + pow(b,2) + pow(c,2) - pow(maior,2);

        if (fabs(pow(maior,2) - (pow(a,2) + pow(b,2) + pow(c,2) - pow(maior,2))) < 0.001)
            printf("Retangulo\n");
        else if (pow(maior,2) < somaQuadrados)
            printf("Acutangulo\n");
        else
            printf("Obtusangulo\n");
    } else {
        printf("Nao forma um triangulo.\n");
    }

    return 0;
}