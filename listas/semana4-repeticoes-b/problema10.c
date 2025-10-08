#include <stdio.h>

int main() {

    float p, q, melhorRazao = 0, razao;
    int x, y, melhorX = 0, melhorY = 0;

    printf("Digite o preco de venda p: ");
    scanf("%f", &p);

    printf("Digite o preco de producao q: ");
    scanf("%f", &q);

    for (x = 2; x <= 10; x++) {
        for (y = 1; y < x; y++) {
            if (y * p >= x * q) {
                razao = (float)x / y;
                if (razao > melhorRazao) {
                    melhorRazao = razao;
                    melhorX = x;
                    melhorY = y;
                }
            }
        }
    }

    printf("A melhor promocao eh: leve %d pague %d\n", melhorX, melhorY);
    
    return 0;
}
