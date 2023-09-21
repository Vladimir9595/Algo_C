#include <stdio.h>

int integer;
double real;

// Entrée console nombre entier
int main() {
    // L'utilisatuer entre au clavier un entier
    printf("Saisir un nombre entier : ");
    scanf("%d", &integer);

    // L'utilisatuer entre au clavier un réel
    printf("Saisir un nombre à virgule : ");
    scanf("%lf", &real);

    // Afficheage des deux nombres
    printf("Votre nombre entier est : %d et votre reel est : %.2lf \n", integer, real);

    return 0;
}
