/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 22
 * Descrição: Lê o conteúdo de teste.txt e o exibe no console.
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    char linha[256];

    FILE *arquivo = fopen("teste.txt", "r");
    if (arquivo == NULL) {
        printf("Erro: teste.txt nao encontrado (execute o ex21 antes).\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
    return 0;
}
