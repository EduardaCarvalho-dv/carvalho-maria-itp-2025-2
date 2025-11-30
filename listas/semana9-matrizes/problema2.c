#include <stdio.h>

int main() {
    int M;
    int matriz[100][100];
    int x;

    scanf("%d", &M);

    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &matriz[i][j]);

    scanf("%d", &x);

    for (int i = 0; i < M; i++) {
        if (i != x && matriz[x][i] == 0) {
            for (int j = 0; j < M; j++) {
                if (matriz[x][j] == 1 && matriz[i][j] == 1) {
                    printf("%d ", i);
                    break;
                }
            }
        }
    }

    printf("\n");
    return 0;
}