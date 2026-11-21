/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 50
 * Descrição: Array de ponteiros para funções (soma, sub, mult, div); um índice escolhe a operação.
 * Data: 19/11/2026
 */

#include <stdio.h>

double soma(double a, double b) { return a + b; }
double sub(double a, double b)  { return a - b; }
double mult(double a, double b) { return a * b; }
/* chamada divisao (e nao div) para nao conflitar com div() de <stdlib.h> */
double divisao(double a, double b) { return a / b; } /* b != 0 e checado no main */

int main(void) {
    /* array de ponteiros para funcoes */
    double (*operacoes[4])(double, double) = {soma, sub, mult, divisao};
    int indice;
    double a, b;

    printf("0-Soma  1-Subtracao  2-Multiplicacao  3-Divisao\nEscolha: ");
    if (scanf("%d", &indice) != 1 || indice < 0 || indice > 3) {
        printf("Opcao invalida.\n");
        return 1;
    }

    printf("Digite dois numeros: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (indice == 3 && b == 0) {
        printf("Erro: divisao por zero!\n");
        return 1;
    }

    printf("Resultado: %.2f\n", operacoes[indice](a, b));
    return 0;
}
