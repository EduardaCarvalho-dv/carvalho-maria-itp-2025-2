#include <stdio.h>
#include <math.h>

int main() {

    float x, y, teia;
    int n;

    printf("Informe a posicao inicial do Homem-Aranha (x, y) e o comprimento maximo da teia: \n");
    scanf("%f %f %f", &x, &y, &teia);

    printf("Informe a quantidade de alvos: \n");
    scanf("%d", &n);

    int i;
    for (i = 0; i < n; i++) {
        float ax, ay;

        printf("Informe as coordenadas do alvo %d (x, y) \n", i + 1);
        scanf("%f %f", &ax, &ay);
        float distancia = sqrt((ax - x)*(ax - x) + (ay - y)*(ay - y));
        if (distancia > teia) {
            printf("N\n");

            return 0;
        }

        x = 2 * ax - x;
        y = ay;
    }

    printf("S\n");

    return 0;
}