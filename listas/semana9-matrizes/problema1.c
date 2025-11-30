#include <stdio.h>

int main() {
    int M, N;
    int matriz[10][10];
    int cobertos = 0, totalFerteis = 0;

    scanf("%d %d", &M, &N);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] == 1)
                totalFerteis++;
        }
    }

    for (int i = 1; i < M - 1; i++) {
        for (int j = 1; j < N - 1; j++) {
            if (matriz[i][j] == 2) {
                if (matriz[i-1][j] == 1) {
                    cobertos++;
                    matriz[i-1][j] = -1;
                }
                if (matriz[i+1][j] == 1) {
                    cobertos++;
                    matriz[i+1][j] = -1;
                }
                if (matriz[i][j-1] == 1) {
                    cobertos++;
                    matriz[i][j-1] = -1;
                }
                if (matriz[i][j+1] == 1) {
                    cobertos++;
                    matriz[i][j+1] = -1;
                }
            }
        }
    }

    printf("%d %d\n", cobertos, totalFerteis - cobertos);

    return 0;
}