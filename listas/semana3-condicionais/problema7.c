#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;//x1 e x2 são as duas raízes

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Nao e uma equacao de segundo grau.\n");
        return 0;
    }

    delta = b*b - 4*a*c;
    printf("Delta = %.2f\n", delta);

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Duas raizes reais: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2*a);
        printf("Uma raiz real: x = %.2f\n", x1);
    } else {
        printf("Nao possui raizes reais.\n");
    }

    return 0;
}