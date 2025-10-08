#include <stdio.h>

int main() {
    
    int n, i, acertos = 0;
    int gabarito[20], respostas[20];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &gabarito[i]);

    for (i = 0; i < n; i++)
        scanf("%d", &respostas[i]);

    for (i = 0; i < n; i++) {
        if (gabarito[i] == respostas[i])
            acertos++;
    }

    if (acertos == 1)
        printf("%d acerto\n", acertos);
    else
        printf("%d acertos\n", acertos);

    return 0;
}
