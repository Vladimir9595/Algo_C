#include <stdio.h>
#include <stdlib.h>
#include "fileinputoutput.h"

char *readFile(const char *filename, size_t *size) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Erreur lors de l'ouverture du fichier");
        return NULL;
    }

    fseek(file, 0, SEEK_END);
    *size = ftell(file);
    fseek(file, 0, SEEK_SET);

    char *buffer = (char *)malloc(*size);
    if (!buffer) {
        perror("Erreur lors de l'allocation du buffer");
        fclose(file);
        return NULL;
    }

    fread(buffer, 1, *size, file);
    fclose(file);

    return buffer;
}

void writeFile(const char *filename, const char *buffer, size_t size) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        perror("Erreur lors de l'ouverture du fichier de sortie");
        return;
    }

    fwrite(buffer, 1, size, file);
    fclose(file);
}
