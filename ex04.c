/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 04
 * Descrição: Calculadora com menu que repete até o usuário escolher Sair (do-while).
 * Data: 19/11/2026
 */

#include <stdio.h>

/* descarta o que sobrou na linha de entrada */
static void limparEntrada(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int main(void) {
    int opcao = 0;
    double a, b;

    do {
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Sair\n");
        printf("Escolha: ");

        int r = scanf("%d", &opcao);
        if (r == EOF) {
            break;
        }
        if (r != 1) {
            limparEntrada();
            printf("Opcao invalida!\n");
            opcao = 0;
            continue;
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            if (scanf("%lf %lf", &a, &b) != 2) {
                limparEntrada();
                printf("Numeros invalidos!\n");
                continue;
            }

            switch (opcao) {
                case 1: printf("Resultado: %.2f\n", a + b); break;
                case 2: printf("Resultado: %.2f\n", a - b); break;
                case 3: printf("Resultado: %.2f\n", a * b); break;
                case 4:
                    if (b == 0) {
                        printf("Erro: divisao por zero!\n");
                    } else {
                        printf("Resultado: %.2f\n", a / b);
                    }
                    break;
            }
        } else if (opcao != 5) {
            printf("Opcao invalida!\n");
        }
    } while (opcao != 5);

    printf("Ate logo!\n");
    return 0;
}
