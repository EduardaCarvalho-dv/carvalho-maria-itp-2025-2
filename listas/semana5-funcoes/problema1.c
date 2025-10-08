#include <stdio.h>

void imprimeHorario(int h, int m, int formato) {

    while (m >= 60) {
        m -= 60;
        h++;
    }
    h = h % 24;

    if (formato == 0) { //formato 24h
        printf("%02d:%02d\n", h, m);
    } else { //formato 12h
        int h12 = h % 12;
        if (h12 == 0) h12 = 12;
        if (h < 12)
            printf("%02d:%02d AM\n", h12, m);
        else
            printf("%02d:%02d PM\n", h12, m);
    }
}

int main() {

    int h, m, formato;
    scanf("%d %d %d", &h, &m, &formato);

    int add_h[] = {0, 1, 2, 4, 12};
    int add_m[] = {0, 0, 10, 40, 5};

    for (int i = 0; i < 5; i++) {
        int nh = h + add_h[i];
        int nm = m + add_m[i];
        imprimeHorario(nh, nm, formato);
    }

    return 0;
}
