/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 35
 * Descrição: Função validarCPF(char cpf[]) que valida apenas o formato do CPF (sem dígitos verificadores).
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * Retorna 1 se o formato for valido e 0 caso contrario.
 * Formatos aceitos: "12345678901" (11 digitos) ou "123.456.789-01" (14 caracteres).
 */
int validarCPF(char cpf[]) {
    size_t tamanho = strlen(cpf);

    if (tamanho == 11) {
        for (size_t i = 0; i < tamanho; i++) {
            if (!isdigit((unsigned char)cpf[i])) {
                return 0;
            }
        }
        return 1;
    }

    if (tamanho == 14) {
        for (size_t i = 0; i < tamanho; i++) {
            if (i == 3 || i == 7) {
                if (cpf[i] != '.') return 0;
            } else if (i == 11) {
                if (cpf[i] != '-') return 0;
            } else if (!isdigit((unsigned char)cpf[i])) {
                return 0;
            }
        }
        return 1;
    }

    return 0;
}

int main(void) {
    char cpf[30];

    printf("Digite o CPF: ");
    if (fgets(cpf, sizeof(cpf), stdin) == NULL) {
        return 1;
    }
    cpf[strcspn(cpf, "\n")] = '\0';

    if (validarCPF(cpf)) {
        printf("Formato de CPF valido.\n");
    } else {
        printf("Formato de CPF invalido.\n");
    }
    return 0;
}
