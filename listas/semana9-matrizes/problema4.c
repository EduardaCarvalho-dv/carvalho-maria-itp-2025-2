#include <stdio.h>

int main() {
    int M;
    int matriz[10][10];
    int X, Z;

    scanf("%d", &M);

    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &matriz[i][j]);

    scanf("%d %d", &X, &Z);

    int menor = 1000000;
    int cidade = -1;

    if (matriz[X][Z] != 0)
        menor = matriz[X][Z];

    for (int i = 0; i < M; i++) {
        if (matriz[X][i] != 0 && matriz[i][Z] != 0) {
            int soma = matriz[X][i] + matriz[i][Z];
            if (soma < menor) {
                menor = soma;
                cidade = i;
            }
        }
    }

    if (cidade == -1)
        printf("%d-%d R$%d\n", X, Z, menor);
    else
        printf("%d-%d-%d R$%d\n", X, cidade, Z, menor);

    return 0;
}