/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 39
 * Descrição: Função ordenar(int arr[], int n) que ordena um array com Bubble Sort.
 * Data: 19/11/2026
 */

#include <stdio.h>

void ordenar(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int v[] = {64, 25, 12, 22, 11, 90, 3};
    int n = (int)(sizeof(v) / sizeof(v[0]));

    printf("Antes : ");
    for (int i = 0; i < n; i++) printf("%d ", v[i]);

    ordenar(v, n);

    printf("\nDepois: ");
    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");
    return 0;
}
