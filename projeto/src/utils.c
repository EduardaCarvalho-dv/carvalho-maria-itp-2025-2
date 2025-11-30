#include <stdio.h>
#include <string.h>
#include "utils.h"

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void readline_strip(const char *msg, char *dest, size_t tam) {
    printf("%s", msg);
    fgets(dest, tam, stdin);
    dest[strcspn(dest, "\n")] = 0;
}
