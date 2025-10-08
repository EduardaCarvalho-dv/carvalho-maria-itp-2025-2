#include <stdio.h>
#include <stdlib.h>

int main() {

    int l1, l2, l3, l4;
    int valida;

    for (l1 = 1; l1 <= 4; l1++)
        for (l2 = 1; l2 <= 4; l2++)
            for (l3 = 1; l3 <= 4; l3++)
                for (l4 = 1; l4 <= 4; l4++) {
                    valida = 1;
                    if (l1 == l2 || l1 == l3 || l1 == l4 || l2 == l3 || l2 == l4 || l3 == l4)
                        valida = 0;
                    if (abs(l1 - l2) == 1 || abs(l1 - l3) == 2 || abs(l1 - l4) == 3 ||
                        abs(l2 - l3) == 1 || abs(l2 - l4) == 2 ||
                        abs(l3 - l4) == 1)
                        valida = 0;

                    if (valida)
                        printf("%d %d %d %d\n", l1, l2, l3, l4);
                }
                
    return 0;
}
