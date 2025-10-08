#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_DENUNCIAS 100
#define TAM_TEXTO 200

typedef struct {
    char tipo[50];
    char local[50];
    char descricao[TAM_TEXTO];
} Denuncia;

Denuncia denuncias[MAX_DENUNCIAS];
int totalDenuncias = 0;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void exibirCabecalho() {
    printf("===========================================\n");
    printf("       SISTEMA DE DENUNCIAS ANONIMAS       \n");
    printf("===========================================\n");
}

// Função para exibir o menu principal
void exibirMenu() {
    exibirCabecalho();
    printf("1  Fazer nova denuncia\n");
    printf("2  Listar denuncias\n");
    printf("3  Pesquisar denuncias por tipo\n");
    printf("0  Sair\n");
    printf("-------------------------------------------\n");
    printf("Escolha uma opcao: ");
}

// Função para cadastrar nova denúncia
void cadastrarDenuncia() {
    if (totalDenuncias >= MAX_DENUNCIAS) {
        printf("\n  Limite maximo de denuncias atingido!\n");
        return;
    }

    Denuncia d;
    limparBuffer();

    printf("\n Cadastro de Denuncia\n");
    printf("-------------------------------------------\n");

    printf("Tipo da denuncia (ex: Assedio, Furto, outro...): ");
    fgets(d.tipo, sizeof(d.tipo), stdin);
    d.tipo[strcspn(d.tipo, "\n")] = 0;

    printf("Local do ocorrido: ");
    fgets(d.local, sizeof(d.local), stdin);
    d.local[strcspn(d.local, "\n")] = 0;

    printf("Descricao: ");
    fgets(d.descricao, sizeof(d.descricao), stdin);
    d.descricao[strcspn(d.descricao, "\n")] = 0;

    denuncias[totalDenuncias] = d;
    totalDenuncias++;

    printf("\n Denuncia registrada anonimamente com sucesso!\n");
}

// Função para listar denúncias
void listarDenuncias() {
    if (totalDenuncias == 0) {
        printf("\n Nenhuma denuncia registrada ainda.\n");
        return;
    }

    printf("\n Lista de Denuncias\n");
    printf("-------------------------------------------\n");
    for (int i = 0; i < totalDenuncias; i++) {
        printf("\nDenuncia #%d\n", i + 1);
        printf("Tipo: %s\n", denuncias[i].tipo);
        printf("Local: %s\n", denuncias[i].local);
        printf("Descricao: %s\n", denuncias[i].descricao);
        printf("-------------------------------------------\n");
    }
}

void pesquisarPorTipo() {
    if (totalDenuncias == 0) {
        printf("\n Nenhuma denuncia registrada.\n");
        return;
    }

    char tipoBusca[50];
    limparBuffer();

    printf("\n Digite o tipo de denuncia para buscar: ");
    fgets(tipoBusca, sizeof(tipoBusca), stdin);
    tipoBusca[strcspn(tipoBusca, "\n")] = 0;

    printf("\n=== Resultados para \"%s\" ===\n", tipoBusca);
    int encontrados = 0;

    for (int i = 0; i < totalDenuncias; i++) {
        if (strcasecmp(denuncias[i].tipo, tipoBusca) == 0) {
            printf("\nDenuncia #%d\n", i + 1);
            printf("Local: %s\n", denuncias[i].local);
            printf("Descricao: %s\n", denuncias[i].descricao);
            printf("-------------------------------------------\n");
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("  Nenhuma denuncia encontrada desse tipo.\n");
    }
}

int main() {

    int opcao;
    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarDenuncia(); break;
            case 2: listarDenuncias(); break;
            case 3: pesquisarPorTipo(); break;
            case 0: printf("\n Encerrando o sistema. Obrigado por usar!\n"); break;
            default: printf("\n X Opcao invalida! Tente novamente.\n");
        }

        printf("\nPressione ENTER para continuar...");
        limparBuffer();
        getchar();

    } while (opcao != 0);

    return 0;
}