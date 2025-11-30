#include <stdio.h>

int main() {
    int n;
    int largada[20], chegada[20];
    int ganho[20] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &largada[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &chegada[i]);
    }

    for (int i = 0; i < n; i++) {
        int piloto = chegada[i];

        for (int j = 0; j < n; j++) {
            if (largada[j] == piloto) {
                ganho[piloto - 1] = j - i;
            }
        }
    }

    int maior = ganho[0];
    int vencedor = 1;
    int empate = 0;

    for (int i = 1; i < n; i++) {
        if (ganho[i] > maior) {
            maior = ganho[i];
            vencedor = i + 1;
            empate = 0;
        } 
        else if (ganho[i] == maior) {
            empate = 1;
        }
    }

    if (maior <= 0 || empate) {
        printf("empate\n");
    } else {
        printf("%d\n", vencedor);
    }

    return 0;
}