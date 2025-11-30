#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include "denuncias.h"
#include "storage.h"
#include "utils.h"

#define DB_FILE "denuncias.db"

static void on_sigint(int sig) {
    (void)sig;
    printf("\n\n[CTRL+C] Salvando dados antes de sair...\n");
    salvar_arquivo(DB_FILE);
    free_denuncias();
    printf("Dados salvos. Encerrando.\n");
    exit(0);
}

static void exibir_menu() {
    printf("\n=========================================\n");
    printf("      SISTEMA DE DENUNCIAS ANONIMAS      \n");
    printf("=========================================\n");
    printf("1 - Fazer nova denuncia\n");
    printf("2 - Listar denuncias\n");
    printf("3 - Buscar por palavra-chave\n");
    printf("4 - Remover denuncia\n");
    printf("5 - Exportar CSV\n");
    printf("0 - Sair\n");
    printf("-----------------------------------------\n");
    printf("Escolha: ");
}

void cadastrar() {
    Denuncia d;
    printf("\nNovo cadastro de denuncia\n");
    
    readline_strip("Tipo: ", d.tipo, sizeof(d.tipo));
    readline_strip("Local: ", d.local, sizeof(d.local));
    readline_strip("Descricao: ", d.descricao, sizeof(d.descricao));

    adicionar_denuncia(&d);
    printf("Denuncia registrada com sucesso!\n");
}

void listar() {
    size_t t = total_denuncias();
    if (t == 0) {
        printf("\nNenhuma denuncia cadastrada.\n");
        return;
    }

    printf("\n=== Lista de denuncias (%zu) ===\n", t);
    for (size_t i = 0; i < t; i++) {
        const Denuncia *d = obter_denuncia(i);
        printf("\nDenuncia #%zu\n", i + 1);
        printf("Tipo: %s\n", d->tipo);
        printf("Local: %s\n", d->local);
        printf("Descricao: %s\n", d->descricao);
    }
}

void buscar() {
    char palavra[100];
    readline_strip("\nBuscar palavra: ", palavra, sizeof(palavra));

    int indices[256];
    int n = buscar_por_palavra(palavra, indices, 256);

    if (n == 0) {
        printf("Nenhuma denuncia encontrada contendo \"%s\".\n", palavra);
        return;
    }

    printf("\nEncontradas %d denuncias:\n", n);

    for (int i = 0; i < n; i++) {
        const Denuncia *d = obter_denuncia(indices[i]);
        printf("\nDenuncia #%d\n", indices[i] + 1);
        printf("Tipo: %s\n", d->tipo);
        printf("Local: %s\n", d->local);
        printf("Descricao: %s\n", d->descricao);
    }
}

void remover() {
    size_t t = total_denuncias();
    if (t == 0) {
        printf("Nenhuma denuncia para remover.\n");
        return;
    }

    listar();

    int id;
    printf("\nDigite o numero da denuncia para remover: ");
    scanf("%d", &id);
    limpar_buffer();

    if (id < 1 || (size_t)id > t) {
        printf("ID invalido.\n");
        return;
    }

    remover_denuncia(id - 1);
    printf("Denuncia removida.\n");
}

int main(void) {
    signal(SIGINT, on_sigint);

    init_denuncias();

    if (!carregar_arquivo(DB_FILE)) {
        printf("Nenhum banco carregado. Iniciando novo.\n");
    }

    int opcao;
    do {
        exibir_menu();
        scanf("%d", &opcao);
        limpar_buffer();

        switch (opcao) {
            case 1: cadastrar(); break;
            case 2: listar(); break;
            case 3: buscar(); break;
            case 4: remover(); break;
            case 5:
                if (exportar_csv("denuncias.csv"))
                    printf("CSV exportado com sucesso!\n");
                else
                    printf("Erro ao exportar CSV.\n");
                break;
            case 0: 
                salvar_arquivo(DB_FILE);
                printf("Saindo... Arquivo salvo.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    free_denuncias();
    return 0;
}
