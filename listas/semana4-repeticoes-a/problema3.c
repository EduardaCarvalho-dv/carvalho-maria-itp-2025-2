#include <stdio.h>
#include <stdlib.h>

int somaDivisor(int n) {

    int soma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            soma += i;
    }
    return soma;
}

int main() {

    int a, b;

    printf("Digite dois numeros inteiros distintos: \n");
    scanf("%d %d", &a, &b);

    int Da = somaDivisor(a);
    int Db = somaDivisor(b);

    if (abs(Da - b) <= 2 && abs(Db - a) <= 2)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}