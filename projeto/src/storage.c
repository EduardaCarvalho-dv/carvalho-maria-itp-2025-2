#include <stdio.h>
#include "denuncias.h"
#include "storage.h"

int salvar_arquivo(const char *nome) {
    char temp[256];
    snprintf(temp, sizeof(temp), "%s.tmp", nome);

    FILE *f = fopen(temp, "wb");
    if (!f) return 0;

    size_t t = total_denuncias();
    if (fwrite(&t, sizeof t, 1, f) != 1) { fclose(f); return 0; }

    for (size_t i = 0; i < t; i++) {
        const Denuncia *d = obter_denuncia(i);
        if (fwrite(d, sizeof *d, 1, f) != 1) {
            fclose(f);
            return 0;
        }
    }
    fclose(f);

    rename(temp, nome);
    return 1;
}

int carregar_arquivo(const char *nome) {
    FILE *f = fopen(nome, "rb");
    if (!f) return 0;

    size_t n;
    if (fread(&n, sizeof n, 1, f) != 1) {
        fclose(f);
        return 0;
    }

    if (n > 100000) { fclose(f); return 0; }

    for (size_t i = 0; i < n; i++) {
        Denuncia d;
        if (fread(&d, sizeof d, 1, f) != 1) {
            fclose(f);
            return 0;
        }
        adicionar_denuncia(&d);
    }
    fclose(f);
    return 1;
}

int exportar_csv(const char *nome) {
    FILE *f = fopen(nome, "w");
    if (!f) return 0;

    fprintf(f, "tipo,local,descricao\n");

    size_t t = total_denuncias();
    for (size_t i = 0; i < t; i++) {
        const Denuncia *d = obter_denuncia(i);
        fprintf(f, "\"%s\",\"%s\",\"%s\"\n", d->tipo, d->local, d->descricao);
    }

    fclose(f);
    return 1;
}
