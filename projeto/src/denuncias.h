#ifndef DENUNCIAS_H
#define DENUNCIAS_H

typedef struct {
    char tipo[100];
    char local[100];
    char descricao[500];
} Denuncia;

void init_denuncias(void);
void free_denuncias(void);

void adicionar_denuncia(const Denuncia*);
size_t total_denuncias(void);
const Denuncia *obter_denuncia(size_t);
void remover_denuncia(size_t);

int buscar_por_palavra(const char*, int *indices, int max);

#endif
