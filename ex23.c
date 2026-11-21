/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 23
 * Descrição: Pede 5 nomes ao usuário e os grava em nomes.txt, um por linha.
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <string.h>

#define QTD 5
#define TAM_NOME 100

int main(void) {
    char nome[TAM_NOME];

    FILE *arquivo = fopen("nomes.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir nomes.txt.\n");
        return 1;
    }

    for (int i = 1; i <= QTD; i++) {
        printf("Nome %d: ", i);
        if (fgets(nome, sizeof(nome), stdin) == NULL) {
            break;
        }
        nome[strcspn(nome, "\n")] = '\0';
        fprintf(arquivo, "%s\n", nome);
    }

    fclose(arquivo);
    printf("Nomes gravados em nomes.txt.\n");
    return 0;
}
