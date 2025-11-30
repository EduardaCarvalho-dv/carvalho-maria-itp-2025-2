#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "denuncias.h"

static Denuncia *array = NULL;
static size_t total = 0;
static size_t capacity = 0;

static void garantir_capacidade(void) {
    if (capacity == 0) {
        capacity = 8;
        array = malloc(capacity * sizeof(Denuncia));
        if (!array) {
            fprintf(stderr, "malloc falhou!\n");
            exit(1);
        }
    }

    if (total >= capacity) {
        size_t novo = capacity * 2;
        Denuncia *tmp = realloc(array, novo * sizeof(Denuncia));
        if (!tmp) {
            fprintf(stderr, "realloc falhou!\n");
            exit(1);
        }
        array = tmp;
        capacity = novo;
    }
}

void init_denuncias(void) {
    array = NULL;
    total = 0;
    capacity = 0;
}

void free_denuncias(void) {
    free(array);
    array = NULL;
    total = 0;
    capacity = 0;
}

void adicionar_denuncia(const Denuncia *d) {
    garantir_capacidade();
    array[total] = *d;
    total++;
}

size_t total_denuncias(void) {
    return total;
}

const Denuncia *obter_denuncia(size_t i) {
    if (i >= total) return NULL;
    return &array[i];
}

void remover_denuncia(size_t i) {
    if (i >= total) return;
    for (size_t j = i; j + 1 < total; j++)
        array[j] = array[j + 1];
    total--;
}

int buscar_por_palavra(const char *palavra, int *indices, int max) {
    int count = 0;
    for (size_t i = 0; i < total; i++) {
        if (strstr(array[i].descricao, palavra) ||
            strstr(array[i].tipo, palavra) ||
            strstr(array[i].local, palavra)) {

            if (count < max)
                indices[count] = i;
            count++;
        }
    }
    return count;
}
