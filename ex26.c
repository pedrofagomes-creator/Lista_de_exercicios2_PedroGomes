/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 26
 * Descrição: Lê nome, idade e salário de um funcionário e grava em funcionario.csv (Nome,Idade,Salario).
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <string.h>

#define TAM_NOME 100

int main(void) {
    char nome[TAM_NOME];
    int idade;
    double salario;

    printf("Nome: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        printf("Erro na leitura.\n");
        return 1;
    }
    nome[strcspn(nome, "\n")] = '\0';

    if (strchr(nome, ',') != NULL) {
        printf("O nome nao pode conter virgula (separador do CSV).\n");
        return 1;
    }

    printf("Idade: ");
    if (scanf("%d", &idade) != 1 || idade < 0) {
        printf("Idade invalida.\n");
        return 1;
    }
    printf("Salario: ");
    if (scanf("%lf", &salario) != 1 || salario < 0) {
        printf("Salario invalido.\n");
        return 1;
    }

    FILE *arquivo = fopen("funcionario.csv", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar funcionario.csv.\n");
        return 1;
    }

    fprintf(arquivo, "Nome,Idade,Salario\n");          /* cabecalho */
    fprintf(arquivo, "%s,%d,%.2f\n", nome, idade, salario);
    fclose(arquivo);

    printf("Dados gravados em funcionario.csv.\n");
    return 0;
}
