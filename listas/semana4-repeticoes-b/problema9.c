#include <stdio.h>

int main() {

    int preco1, preco2, dinheiro;
    int i, j, resto, menorResto, melhorI, melhorJ;

    printf("Digite o preco do primeiro fornecedor: ");
    scanf("%d", &preco1);

    printf("Digite o preco do segundo fornecedor: ");
    scanf("%d", &preco2);
    
    printf("Digite a quantia disponivel: ");
    scanf("%d", &dinheiro);

    menorResto = dinheiro;
    melhorI = melhorJ = 0;

    for (i = 0; i <= 10; i++) {
        for (j = 0; j <= 10; j++) {
            resto = dinheiro - (i * preco1 + j * preco2);
            if (resto >= 0 && resto < menorResto) {
                menorResto = resto;
                melhorI = i;
                melhorJ = j;
            }
        }
    }

    printf("Resta menos comprando %d do primeiro e %d do segundo\n", melhorI, melhorJ);

    return 0;
}
