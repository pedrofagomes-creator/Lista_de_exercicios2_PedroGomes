/*
 * Aluno: Pedro Felipe Alexandre Gomes
 * Exercício: 29
 * Descrição: Copia o conteúdo de um arquivo de origem para um arquivo de destino.
 * Data: 19/11/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char origem[100], destino[100];
    unsigned char buffer[1024];
    size_t lidos;

    printf("Arquivo de origem: ");
    if (fgets(origem, sizeof(origem), stdin) == NULL) {
        return 1;
    }
    origem[strcspn(origem, "\n")] = '\0';

    printf("Arquivo de destino: ");
    if (fgets(destino, sizeof(destino), stdin) == NULL) {
        return 1;
    }
    destino[strcspn(destino, "\n")] = '\0';

    if (strcmp(origem, destino) == 0) {
        printf("Origem e destino nao podem ser o mesmo arquivo.\n");
        return 1;
    }

    FILE *fo = fopen(origem, "rb");
    if (fo == NULL) {
        printf("Erro ao abrir a origem.\n");
        return 1;
    }
    FILE *fd = fopen(destino, "wb");
    if (fd == NULL) {
        printf("Erro ao criar o destino.\n");
        fclose(fo);
        return 1;
    }

    while ((lidos = fread(buffer, 1, sizeof(buffer), fo)) > 0) {
        fwrite(buffer, 1, lidos, fd);
    }

    fclose(fo);
    fclose(fd);
    printf("Arquivo copiado com sucesso.\n");
    return 0;
}
