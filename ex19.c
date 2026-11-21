/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 19
 * Descrição: Lê 15 números (0 a 9), conta quantas vezes cada um aparece e imprime a frequência.
 * Data: 19/11/2026
 */

#include <stdio.h>

#define TOTAL 15

int main(void) {
    int frequencia[10] = {0};
    int valor;

    for (int i = 0; i < TOTAL; i++) {
        printf("Numero %d (0 a 9): ", i + 1);
        if (scanf("%d", &valor) != 1 || valor < 0 || valor > 9) {
            printf("Valor invalido! Use apenas de 0 a 9.\n");
            return 1;
        }
        frequencia[valor]++;
    }

    printf("\nFrequencia:\n");
    for (int n = 0; n < 10; n++) {
        printf("%d aparece %d vez(es)\n", n, frequencia[n]);
    }
    return 0;
}
