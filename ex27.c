/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 27
 * Descrição: Lê funcionario.csv, processa cada linha e exibe as informações formatadas.
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    char linha[256];
    char nome[100];
    int idade;
    double salario;

    FILE *arquivo = fopen("funcionario.csv", "r");
    if (arquivo == NULL) {
        printf("Erro: funcionario.csv nao encontrado (execute o ex26 antes).\n");
        return 1;
    }

    /* pula a linha de cabecalho */
    if (fgets(linha, sizeof(linha), arquivo) == NULL) {
        printf("Arquivo vazio.\n");
        fclose(arquivo);
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        /* %99[^,] le ate a virgula, respeitando o tamanho do buffer */
        if (sscanf(linha, "%99[^,],%d,%lf", nome, &idade, &salario) == 3) {
            printf("Nome   : %s\n", nome);
            printf("Idade  : %d anos\n", idade);
            printf("Salario: R$ %.2f\n\n", salario);
        } else {
            printf("Linha invalida ignorada.\n");
        }
    }

    fclose(arquivo);
    return 0;
}
