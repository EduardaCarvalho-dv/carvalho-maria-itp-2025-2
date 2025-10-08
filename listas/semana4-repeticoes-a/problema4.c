#include <stdio.h>
#include <math.h>

int main() {
    
    float x, y, pontos = 0;
    float ultX = 0, ultY = 0;
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%f %f", &x, &y);
        float d = sqrt(x*x + y*y);
        float principal = 0;

        if (d <= 1)
            principal = 10;
        else if (d <= 2)
            principal = 6;
        else if (d <= 3)
            principal = 4;

        pontos += principal;

        if (i > 0) {
            float distUltimo = sqrt((x - ultX)*(x - ultX) + (y - ultY)*(y - ultY));
            float bonus = 0;

            if (distUltimo <= 1)
                bonus = 5;
            else if (distUltimo <= 2)
                bonus = 3;
            else if (distUltimo <= 3)
                bonus = 2;

            pontos += bonus / 2.0;
        }

        ultX = x;
        ultY = y;
    }

    printf("%.1f\n", pontos);

    return 0;
}
