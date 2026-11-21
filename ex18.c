/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 18
 * Descrição: Copia o conteúdo de um array para outro sem usar funções de biblioteca.
 * Data: 19/11/2026
 */

#include <stdio.h>

#define TAM 6

int main(void) {
    int origem[TAM] = {10, 20, 30, 40, 50, 60};
    int destino[TAM];

    /* copia elemento por elemento (sem memcpy) */
    for (int i = 0; i < TAM; i++) {
        destino[i] = origem[i];
    }

    printf("Origem : ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", origem[i]);
    }
    printf("\nDestino: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", destino[i]);
    }
    printf("\n");
    return 0;
}
