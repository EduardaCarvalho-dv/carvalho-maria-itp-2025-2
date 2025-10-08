#include <stdio.h>

int main() {

    int n, i;
    int alturas[30];
    int max = 0, primeira = -1, segunda = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &alturas[i]);
        if (alturas[i] > max)
            max = alturas[i];
    }

    for (i = 0; i < n; i++) {
        if (alturas[i] == max) {
            if (primeira == -1)
                primeira = i;
            else {
                segunda = i;
                break;
            }
        }
    }

    printf("%d\n", segunda - primeira);
    
    return 0;
}
