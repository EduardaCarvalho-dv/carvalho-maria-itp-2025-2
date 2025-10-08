#include <stdio.h>
#include <math.h>

int ehPrimo(int n) {

    if (n < 2) return 0;
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }

    return 1;
}

int main() {

    for (int x = 2; x <= 50000; x++) {
        if (ehPrimo(x) && ehPrimo(x + 2) && ehPrimo(x + 6)) {
            printf("(%d, %d, %d)\n", x, x + 2, x + 6);
        }
    }

    return 0;
}
