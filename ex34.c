/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 34
 * Descrição: Função fatorial recursiva, com comparação em relação à versão iterativa.
 * Data: 19/11/2026
 */

#include <stdio.h>

/*
 * Comparacao com a versao iterativa (ex33):
 * - Recursiva: mais proxima da definicao matematica (n! = n * (n-1)!), codigo
 *   mais curto, mas cada chamada consome espaco na pilha e ha custo de chamadas.
 * - Iterativa (for): usa memoria constante e e um pouco mais rapida; o codigo
 *   e ligeiramente mais longo.
 * Ambas retornam o mesmo resultado.
 */
unsigned long long fatorial(int n) {
    if (n <= 1) { /* caso base */
        return 1;
    }
    return (unsigned long long)n * fatorial(n - 1); /* caso recursivo */
}

int main(void) {
    int n;

    printf("Digite N (0 a 20): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) {
        printf("Valor invalido (use de 0 a 20).\n");
        return 1;
    }

    printf("%d! = %llu\n", n, fatorial(n));
    return 0;
}
