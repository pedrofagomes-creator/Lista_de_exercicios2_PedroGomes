/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 21
 * Descrição: Escreve a string "Primeira linha de um arquivo." no arquivo teste.txt.
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    FILE *arquivo = fopen("teste.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar teste.txt.\n");
        return 1;
    }

    fputs("Primeira linha de um arquivo.\n", arquivo);
    fclose(arquivo);

    printf("Arquivo teste.txt gravado com sucesso.\n");
    return 0;
}
