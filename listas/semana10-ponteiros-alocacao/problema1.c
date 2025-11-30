#include <stdio.h>
#include <stdlib.h>

int *alocarVetor(int n) {
    int *v;
    v = (int *) malloc(n * sizeof(int));
    return v;
}

int *somaVetores(int *u, int *v, int n) {
    int *soma = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        soma[i] = u[i] + v[i];
    }
    return soma;
}

int main() {
    int n1, n2;
    int *u, *v, *soma;

    scanf("%d %d", &n1, &n2);

    u = alocarVetor(n1);
    v = alocarVetor(n2);

    for (int i = 0; i < n1; i++) {
        scanf("%d", &u[i]);
    }

    for (int i = 0; i < n2; i++) {
        scanf("%d", &v[i]);
    }

    if (n1 != n2) {
        printf("dimensoes incompativeis\n");
    } else {
        soma = somaVetores(u, v, n1);

        for (int i = 0; i < n1; i++) {
            printf("%d ", soma[i]);
        }
        printf("\n");

        free(soma);
    }

    free(u);
    free(v);

    return 0;
}