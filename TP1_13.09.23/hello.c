// Faire un hello.c et le compiler

#include <stdio.h>

char name[50]; // Déclaration d'une chaine de caractère de 50 caractrères max

int main() {

    // L'utilisateur saisie son prenom
    printf("Comment vous appellez vous ? \n");
	scanf("%s", name); // Stockage du prenom

    // Affichage du prenom
    printf("Bonjour %s ravi de faire votre connaissance. \n", name);

    return 0;
}
