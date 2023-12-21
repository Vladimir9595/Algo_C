#include <stdio.h>
#include <stdlib.h>
#include "utf8detector.h"
#include "arabicdigits.h"
#include "fileinputoutput.h"


int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s test.txt\n", argv[0]);
        return EXIT_FAILURE;
    }

    size_t size;
    char *buffer = readFile(argv[1], &size);
    if (!buffer) {
        return EXIT_FAILURE;
    }

    // Afficher le texte original
    printf("Texte original: \n %s \n", buffer);

    // Détecter et afficher les caractères UTF-8
    detectUTF8(buffer, size);

    // Convertir les chiffres latins en chiffres arabes et sauvegarder dans un nouveau fichier
    convertArabCharAndSave(buffer, "resultat.txt");

    free(buffer);

    return EXIT_SUCCESS;
}
