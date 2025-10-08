#include <stdio.h>

int main() {
    
    int v[10];
    int visitado[10] = {0};
    int atual = 0;

    for (int i = 0; i < 10; i++)
        scanf("%d", &v[i]);

    while (1) {
        if (visitado[atual]) {
            printf("%d\n", atual);
            break;
        }
        visitado[atual] = 1;
        atual = v[atual];
    }

    return 0;
}
