#include <stdio.h>

int main() {
    int M;
    int matriz[20][20];
    int empates = 0;

    scanf("%d", &M);

    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &matriz[i][j]);

    for (int i = 0; i < M; i++) {
        for (int j = i + 1; j < M; j++) {
            if (matriz[i][j] == matriz[j][i]) {
                empates++;
            }
        }
    }

    printf("%d\n", empates);

    return 0;
}