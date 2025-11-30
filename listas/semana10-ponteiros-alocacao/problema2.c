#include <stdio.h>
#include <stdlib.h>

int *buscaNoVetor(int *v, int n, int valor, int *qtd) {
    int *indices = NULL;
    *qtd = 0;

    // Conta quantas vezes o valor aparece
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) {
            (*qtd)++;
        }
    }

    if (*qtd == 0) {
        return NULL;
    }

    // Aloca o vetor de índices
    indices = (int *) malloc(*qtd * sizeof(int));

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == valor) {
            indices[j] = i;
            j++;
        }
    }

    return indices;
}

int main() {
    int n, valor, qtd;
    int *v, *indices;

    scanf("%d", &n);

    v = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &valor);

    indices = buscaNoVetor(v, n, valor, &qtd);

    if (indices == NULL) {
        printf("Nenhuma ocorrencia\n");
    } else {
        printf("%d\n", qtd);
        for (int i = 0; i < qtd; i++) {
            printf("%d ", indices[i]);
        }
        printf("\n");
        free(indices);
    }

    free(v);

    return 0;
}