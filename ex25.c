/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 25
 * Descrição: Versão do ex23 que anexa novos nomes ao final de nomes.txt sem sobrescrever (modo append).
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <string.h>

/*
 * Observacao: o enunciado diz "programa 3", mas o programa que grava nomes
 * em nomes.txt e o exercicio 23; por isso esta e a versao modificada do ex23.
 */

#define TAM_NOME 100

int main(void) {
    char nome[TAM_NOME];
    int quantidade;

    printf("Quantos nomes deseja adicionar? ");
    if (scanf("%d", &quantidade) != 1 || quantidade < 1) {
        printf("Quantidade invalida.\n");
        return 1;
    }
    /* descarta o resto da linha para o fgets funcionar */
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }

    FILE *arquivo = fopen("nomes.txt", "a"); /* "a" = append */
    if (arquivo == NULL) {
        printf("Erro ao abrir nomes.txt.\n");
        return 1;
    }

    for (int i = 1; i <= quantidade; i++) {
        printf("Nome %d: ", i);
        if (fgets(nome, sizeof(nome), stdin) == NULL) {
            break;
        }
        nome[strcspn(nome, "\n")] = '\0';
        fprintf(arquivo, "%s\n", nome);
    }

    fclose(arquivo);
    printf("Nomes anexados ao final de nomes.txt.\n");
    return 0;
}
