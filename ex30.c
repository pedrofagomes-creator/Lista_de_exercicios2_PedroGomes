/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 30
 * Descrição: Menu com do-while e funções: inserir dados no arquivo, exibir todos os dados ou sair.
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <string.h>

#define ARQUIVO "dados.txt"
#define TAM_LINHA 200

static void limparEntrada(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

/* Acrescenta uma linha digitada pelo usuario ao final do arquivo */
static void inserirDados(void) {
    char texto[TAM_LINHA];

    FILE *arquivo = fopen(ARQUIVO, "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir %s.\n", ARQUIVO);
        return;
    }

    printf("Digite o dado: ");
    if (fgets(texto, sizeof(texto), stdin) != NULL) {
        texto[strcspn(texto, "\n")] = '\0';
        fprintf(arquivo, "%s\n", texto);
        printf("Dado inserido.\n");
    }
    fclose(arquivo);
}

/* Mostra todo o conteudo do arquivo */
static void exibirDados(void) {
    char linha[TAM_LINHA];
    int numero = 1;

    FILE *arquivo = fopen(ARQUIVO, "r");
    if (arquivo == NULL) {
        printf("Nenhum dado cadastrado ainda.\n");
        return;
    }

    printf("--- Dados ---\n");
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%d: %s", numero++, linha);
    }
    fclose(arquivo);
}

int main(void) {
    int opcao = 0;

    do {
        printf("\n=== MENU ===\n1) Inserir dados\n2) Exibir todos os dados\n3) Sair\nEscolha: ");
        int r = scanf("%d", &opcao);
        if (r == EOF) {
            break;
        }
        limparEntrada();
        if (r != 1) {
            printf("Opcao invalida!\n");
            opcao = 0;
            continue;
        }

        switch (opcao) {
            case 1: inserirDados(); break;
            case 2: exibirDados(); break;
            case 3: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 3);

    return 0;
}
