/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 13
 * Descrição: Lê um array de 10 números e uma chave, procura a chave e informa o índice se encontrada.
 * Data: 19/11/2026
 */

#include <stdio.h>

#define TAM 10

int main(void) {
    int numeros[TAM], chave;
    int indice = -1;

    printf("Digite %d numeros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        if (scanf("%d", &numeros[i]) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    printf("Digite a chave a procurar: ");
    if (scanf("%d", &chave) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    for (int i = 0; i < TAM && indice == -1; i++) {
        if (numeros[i] == chave) {
            indice = i;
        }
    }

    if (indice != -1) {
        printf("Chave %d encontrada na posicao (indice) %d.\n", chave, indice);
    } else {
        printf("Chave %d nao encontrada.\n", chave);
    }
    return 0;
}
