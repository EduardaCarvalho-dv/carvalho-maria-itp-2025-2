#include <stdio.h>

int main() {
    float comprimento, largura, bolso;
    int dobras = 0;

    printf("Digite respectivamente: comprimento da folha, largura da folha e largura do bolso. \n");
    scanf("%f %f %f", &comprimento, &largura, &bolso);

    while (comprimento > bolso && largura > bolso) {
        if (comprimento > largura)
            comprimento /= 2;
        else
            largura /= 2;
        dobras++;
    }

    printf("%d\n", dobras);
    return 0;
}
