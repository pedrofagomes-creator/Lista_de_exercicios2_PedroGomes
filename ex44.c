/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 44
 * Descrição: Percorre um array de inteiros com um ponteiro e imprime os elementos.
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    int numeros[] = {5, 10, 15, 20, 25};
    int tamanho = (int)(sizeof(numeros) / sizeof(numeros[0]));
    int *p = numeros; /* aponta para o primeiro elemento */

    /* percorre o array movendo o ponteiro de elemento em elemento */
    for (int i = 0; p < numeros + tamanho; p++, i++) {
        printf("Elemento %d: %d\n", i, *p);
    }
    return 0;
}
