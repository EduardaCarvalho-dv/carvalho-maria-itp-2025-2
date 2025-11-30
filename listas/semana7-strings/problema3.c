#include <stdio.h>
#include <string.h>

int main() {
    char aluno[11];
    char relatorio[1001];

    fgets(aluno, sizeof(aluno), stdin);
    aluno[strcspn(aluno, "\n")] = 0;

    fgets(relatorio, sizeof(relatorio), stdin);

    int faltas = 0;
    int presente = 0;
    int jaTeveAula = 0;

    char *token = strtok(relatorio, " ");

    while (token != NULL) {

        if (strchr(token, '/') != NULL) {

            if (jaTeveAula && !presente) {
                faltas++;
            }

            presente = 0;
            jaTeveAula = 1;
        }
        else {
            if (strcmp(token, aluno) == 0) {
                presente = 1;
            }
        }

        token = strtok(NULL, " ");
    }

    if (jaTeveAula && !presente) {
        faltas++;
    }

    printf("%d\n", faltas);

    return 0;
}
