#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char placa[11];
    scanf("%s", placa);

    int len = strlen(placa);

    //padrão brasileiro: LLL-AAAA
    if (len == 8 &&
        isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) &&
        placa[3] == '-' &&
        isdigit(placa[4]) && isdigit(placa[5]) &&
        isdigit(placa[6]) && isdigit(placa[7])) {

        printf("brasileiro");
    }
    //padrão mercosul: LLLALAA
    else if (len == 7 &&
        isupper(placa[0]) && isupper(placa[1]) && isupper(placa[2]) &&
        isdigit(placa[3]) &&
        isupper(placa[4]) &&
        isdigit(placa[5]) && isdigit(placa[6])) {

        printf("mercosul");
    }
    else {
        printf("invalido");
    }

    return 0;
}