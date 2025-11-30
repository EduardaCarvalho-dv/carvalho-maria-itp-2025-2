#include <stdio.h>
#include <string.h>

int main() {
    
    char campo[21];
    int indice, contador = 0;

    scanf("%s", campo);
    scanf("%d", &indice);

    if (campo[indice] == 'x') {
        printf("bum!\n");
    } else {
        if (indice > 0 && campo[indice - 1] == 'x') {
            contador++;
        }
        if (indice < strlen(campo) - 1 && campo[indice + 1] == 'x') {
            contador++;
        }
        printf("%d", contador);
    }

    return 0;
}