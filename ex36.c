/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 36
 * Descrição: Struct Aluno (nome e nota) e função mediaTurma que calcula a média da turma.
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 50

struct Aluno {
    char nome[50];
    double nota;
};

double mediaTurma(struct Aluno alunos[], int n) {
    double soma = 0;

    if (n <= 0) {
        return 0; /* evita divisao por zero */
    }
    for (int i = 0; i < n; i++) {
        soma += alunos[i].nota;
    }
    return soma / n;
}

int main(void) {
    struct Aluno alunos[MAX_ALUNOS];
    int n;

    printf("Quantos alunos (1 a %d)? ", MAX_ALUNOS);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_ALUNOS) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nome do aluno %d (sem espacos): ", i + 1);
        if (scanf("%49s", alunos[i].nome) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }
        printf("Nota de %s: ", alunos[i].nome);
        if (scanf("%lf", &alunos[i].nota) != 1 || alunos[i].nota < 0 || alunos[i].nota > 10) {
            printf("Nota invalida (0 a 10).\n");
            return 1;
        }
    }

    printf("Media da turma: %.2f\n", mediaTurma(alunos, n));
    return 0;
}
