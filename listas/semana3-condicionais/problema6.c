#include <stdio.h>

int main() {

    char febre, cabeca, corpo, tosse;

    printf("Tem febre? (S/N): ");
    scanf(" %c", &febre);

    printf("Tem dor de cabeca? (S/N): ");
    scanf(" %c", &cabeca);

    printf("Tem dor no corpo? (S/N): ");
    scanf(" %c", &corpo);

    printf("Tem tosse? (S/N): ");
    scanf(" %c", &tosse);

    if (febre == 'S' && cabeca == 'S' && corpo == 'S')
        printf("Possivel gripe\n");
    else if (tosse == 'S' && febre == 'S')
        printf("Possivel resfriado\n");
    else if (cabeca == 'S' && febre == 'N' && corpo == 'N' && tosse == 'N')
        printf("Possivel enxaqueca\n");
    else if (febre == 'S' && cabeca == 'N' && corpo == 'N' && tosse == 'N')
        printf("Consulte um medico\n");
    else if (febre == 'N' && cabeca == 'N' && corpo == 'N' && tosse == 'N')
        printf("Voce parece estar bem\n");
    else
        printf("Consulte um medico para avaliacao\n");

    return 0;
}