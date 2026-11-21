/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 41
 * Descrição: Explica o que é um ponteiro e a diferença entre *p e &variavel, com demonstração.
 * Data: 19/11/2026
 */

#include <stdio.h>

/*
 * O QUE E UM PONTEIRO?
 * Ponteiro e uma variavel que guarda um ENDERECO de memoria, normalmente o
 * endereco de outra variavel. Declara-se com *: int *p;
 *
 * DIFERENCA ENTRE *p E &variavel:
 *  - &variavel (operador de endereco): devolve o ENDERECO onde a variavel esta.
 *      p = &x;   -> p passa a guardar o endereco de x.
 *  - *p (operador de desreferencia): acessa o VALOR guardado no endereco para
 *      o qual p aponta. printf("%d", *p) imprime o valor de x; *p = 5 altera x.
 *
 * Resumindo: & vai da variavel para o endereco; * vai do endereco para o valor.
 * (Na declaracao "int *p", o * apenas indica que p e um ponteiro.)
 */

int main(void) {
    int x = 10;
    int *p = &x;

    printf("Valor de x            : %d\n", x);
    printf("Endereco de x (&x)    : %p\n", (void *)&x);
    printf("Valor de p (endereco) : %p\n", (void *)p);
    printf("Valor apontado (*p)   : %d\n", *p);
    return 0;
}
