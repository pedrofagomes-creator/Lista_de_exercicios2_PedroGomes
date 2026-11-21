/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 28
 * Descrição: Lê um arquivo texto com números inteiros (um por linha), soma todos e exibe o resultado.
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char nomeArquivo[100];
    int numero;
    long soma = 0;
    int quantidade = 0;

    printf("Nome do arquivo (ex: numeros.txt): ");
    if (fgets(nomeArquivo, sizeof(nomeArquivo), stdin) == NULL) {
        return 1;
    }
    nomeArquivo[strcspn(nomeArquivo, "\n")] = '\0';

    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir %s.\n", nomeArquivo);
        return 1;
    }

    while (fscanf(arquivo, "%d", &numero) == 1) {
        soma += numero;
        quantidade++;
    }
    fclose(arquivo);

    printf("%d numeros lidos. Soma = %ld\n", quantidade, soma);
    return 0;
}
