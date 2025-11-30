#include <stdio.h>

int main() {
    int m, n;
    int sorteio[30], aposta[50];
    int acertos = 0;

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        scanf("%d", &sorteio[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &aposta[i]);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (sorteio[i] == aposta[j]) {
                acertos++;
            }
        }
    }

    printf("%d\n", acertos);

    return 0;
}
