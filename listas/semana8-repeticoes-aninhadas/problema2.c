#include <stdio.h>

int main() {
    int chuva[12];
    char meses[12][20] = {
        "Janeiro", "Fevereiro", "Marco", "Abril",
        "Maio", "Junho", "Julho", "Agosto",
        "Setembro", "Outubro", "Novembro", "Dezembro"
    };

    for (int i = 0; i < 12; i++) {
        scanf("%d", &chuva[i]);
    }

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (chuva[i] < chuva[j]) {
                int temp = chuva[i];
                chuva[i] = chuva[j];
                chuva[j] = temp;

                char tempMes[20];
                for (int k = 0; k < 20; k++) {
                    tempMes[k] = meses[i][k];
                    meses[i][k] = meses[j][k];
                    meses[j][k] = tempMes[k];
                }
            }
        }
    }

    for (int i = 0; i < 12; i++) {
        printf("%s %d\n", meses[i], chuva[i]);
    }

    return 0;
}