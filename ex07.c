/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 07
 * Descrição: Imprime as potências de 2 enquanto o valor for menor que 1000 (for).
 * Data: 19/11/2026
 */

#include <stdio.h>

int main(void) {
    for (int expoente = 0, valor = 1; valor < 1000; expoente++, valor *= 2) {
        printf("2^%d = %d\n", expoente, valor);
    }
    return 0;
}
