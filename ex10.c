/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 10
 * Descrição: Imprime os N primeiros termos de Fibonacci com while e com do-while e compara as versões.
 * Data: 19/11/2026
 */

#include <stdio.h>

/*
 * Comparacao com a versao feita com for:
 * - for: ideal quando se sabe o numero de repeticoes; contador, condicao e
 *   incremento ficam juntos na mesma linha.
 * - while: testa a condicao ANTES; o contador e atualizado manualmente.
 * - do-while: executa o corpo ao menos uma vez e testa DEPOIS; aqui e seguro
 *   porque N >= 1 e validado antes.
 * Os tres produzem a mesma saida; muda apenas a estrutura do laco.
 */

static void fibWhile(int n) {
    unsigned long long a = 0, b = 1;
    int i = 0;
    while (i < n) {
        printf("%llu ", a);
        unsigned long long prox = a + b;
        a = b;
        b = prox;
        i++;
    }
    printf("\n");
}

static void fibDoWhile(int n) {
    unsigned long long a = 0, b = 1;
    int i = 0;
    do {
        printf("%llu ", a);
        unsigned long long prox = a + b;
        a = b;
        b = prox;
        i++;
    } while (i < n);
    printf("\n");
}

int main(void) {
    int n;

    printf("Quantos termos (1 a 90)? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 90) {
        printf("Valor invalido (use de 1 a 90 para nao estourar o tipo).\n");
        return 1;
    }

    printf("Versao while:\n");
    fibWhile(n);
    printf("Versao do-while:\n");
    fibDoWhile(n);
    return 0;
}
