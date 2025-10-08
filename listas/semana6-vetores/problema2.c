#include <stdio.h>

int main() {
    int m, n, i, j;
    int figurinhas[1000];
    int tem[1001] = {0}; 

    scanf("%d %d", &m, &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &figurinhas[i]);
        tem[figurinhas[i]] = 1;
    }

    for (i = 1; i <= m; i++) {
        if (tem[i] == 0)
            printf("%d ", i);
    }

    printf("\n");
    
    return 0;
}
