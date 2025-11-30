#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *misturar(char *str1, char *str2) {
    int tam1 = strlen(str1);
    int tam2 = strlen(str2);
    int tamTotal = tam1 + tam2;

    char *nova = (char *) malloc((tamTotal + 1) * sizeof(char));

    int i = 0, j = 0, k = 0;

    while (i < tam1 && j < tam2) {
        nova[k++] = str1[i++];
        nova[k++] = str2[j++];
    }

    while (i < tam1) {
        nova[k++] = str1[i++];
    }

    while (j < tam2) {
        nova[k++] = str2[j++];
    }

    nova[k] = '\0';

    return nova;
}

int main() {
    char str1[101], str2[101];
    char *resultado;

    fgets(str1, 101, stdin);
    fgets(str2, 101, stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    resultado = misturar(str1, str2);

    printf("%s\n", resultado);

    free(resultado);

    return 0;
}