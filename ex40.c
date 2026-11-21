/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 40
 * Descrição: Função buscar(int arr[], int n, int chave) que retorna o índice da chave ou -1.
 * Data: 19/11/2026
 */

#include <stdio.h>

int buscar(int arr[], int n, int chave) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == chave) {
            return i;
        }
    }
    return -1; /* nao encontrado */
}

int main(void) {
    int v[] = {7, 3, 9, 1, 5, 8};
    int n = (int)(sizeof(v) / sizeof(v[0]));
    int chave;

    printf("Digite a chave a buscar: ");
    if (scanf("%d", &chave) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    int indice = buscar(v, n, chave);
    if (indice == -1) {
        printf("Chave %d nao encontrada.\n", chave);
    } else {
        printf("Chave %d encontrada no indice %d.\n", chave, indice);
    }
    return 0;
}
