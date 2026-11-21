/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 17
 * Descrição: Lê os nomes de 5 cidades em um array de strings e imprime a lista.
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <string.h>

#define QTD 5
#define TAM_NOME 50

int main(void) {
    char nomes[QTD][TAM_NOME];

    for (int i = 0; i < QTD; i++) {
        printf("Cidade %d: ", i + 1);
        if (fgets(nomes[i], TAM_NOME, stdin) == NULL) {
            printf("Erro na leitura.\n");
            return 1;
        }
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; /* remove o \n */
    }

    printf("\nLista de cidades:\n");
    for (int i = 0; i < QTD; i++) {
        printf("%d. %s\n", i + 1, nomes[i]);
    }
    return 0;
}
