#include "arabicdigits.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convertArabCharAndSave(const char* originalText, const char* nameFile) {
    FILE* filename = fopen(nameFile, "w");
    if (filename == NULL) {
        fprintf(stderr, "Erreur d'ouverture du fichier.\n");
        exit(EXIT_FAILURE);
    }

    size_t sizeText = strlen(originalText);

    // Tableau de correspondance entre les chiffres latins et arabes
    char initalNumbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char arabsNumbers[][4] = {"٠", "١", "٢", "٣", "٤", "٥", "٦", "٧", "٨", "٩"};

    // Copier le texte en remplaçant les chiffres latins par les chiffres arabes
    for (size_t i = 0; i < sizeText; i++) {
        int isInitialNumber = 0;
        for (int j = 0; j < 10; j++) {
            if (originalText[i] == initalNumbers[j]) {
                isInitialNumber = 1;
                break;
            }
        }

        if (isInitialNumber) {
            // Remplacer le chiffre latin par le chiffre arabe correspondant
            fprintf(filename, "%s", arabsNumbers[originalText[i] - '0']);
        } else {
            // Copier les autres caractères tels quels
            fprintf(filename, "%c", originalText[i]);
        }
    }

    fclose(filename);
}
