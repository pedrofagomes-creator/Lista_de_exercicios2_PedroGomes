/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 46
 * Descrição: Struct Pessoa e função inicializar que modifica a struct através de um ponteiro.
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <string.h>

#define TAM_NOME 50

struct Pessoa {
    char nome[TAM_NOME];
    int idade;
};

void inicializar(struct Pessoa *p, char nome[], int idade) {
    strncpy(p->nome, nome, TAM_NOME - 1); /* copia sem estourar o buffer */
    p->nome[TAM_NOME - 1] = '\0';
    p->idade = idade;
}

int main(void) {
    struct Pessoa pessoa;
    char nome[TAM_NOME];
    int idade;

    printf("Nome: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        return 1;
    }
    nome[strcspn(nome, "\n")] = '\0';

    printf("Idade: ");
    if (scanf("%d", &idade) != 1 || idade < 0) {
        printf("Idade invalida.\n");
        return 1;
    }

    inicializar(&pessoa, nome, idade);
    printf("Pessoa: %s, %d anos\n", pessoa.nome, pessoa.idade);
    return 0;
}
