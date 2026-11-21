/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 24
 * Descrição: Lê nomes.txt e exibe quantos nomes têm mais de 5 caracteres.
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[256];
    int contador = 0;

    FILE *arquivo = fopen("nomes.txt", "r");
    if (arquivo == NULL) {
        printf("Erro: nomes.txt nao encontrado (execute o ex23 antes).\n");
        return 1;
    }

    while (fgets(nome, sizeof(nome), arquivo) != NULL) {
        nome[strcspn(nome, "\n")] = '\0';
        if (strlen(nome) > 5) {
            contador++;
        }
    }

    fclose(arquivo);
    printf("Nomes com mais de 5 caracteres: %d\n", contador);
    return 0;
}
