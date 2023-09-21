// Afficher un carré avec son périmètre, son aire et sa diagonale

#include <stdio.h>
#include <math.h>

// Declaration des variables reelles
double side;
double perimeter;
double area;
double diagonal;

int main() {
    printf("Saisir la longueur du cote : "); // L'utilisateur saisie la longueur du cote
    scanf("%lf", &side); // On stocke la valeur dans la variable cote

    perimeter = side * 4; // Calcul du perimetre
    area = side * side;   // Calcul de l'aire
    diagonal = sqrt(pow(side, 2) * 2); // Calcul de la diagonale

    printf("Le perimetre est : %.2lf \n", perimeter); // On affiche le perimetre
    printf("L'aire est : %.2lf \n", area); // On affiche l'aire
    printf("La diagonale est : %.2lf \n", diagonal); // On affiche la diagonale

    return 0;
}
