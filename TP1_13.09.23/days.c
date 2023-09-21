// Afficher le nombre de jour d'un mois

#include <stdio.h>

int main() {
    // Declaration des variables entieres
    int month;
    int year;

    // L'utilisateur saisie le mois et nous stockons l'information avec le scanf()
    printf("Saisir le mois : ");
    scanf("%d", &month);

    // L'utilisateur saisie l'année et nous stockons l'information avec le scanf()
    printf("Saisir l'annee : ");
    scanf("%d", &year);

    // On teste les conditions pour afficher le nombre de jours
    if (month == 2) {    // Condition pour le mois de fevrier
        if (year % 4 == 0) {  // Condition pour les annees bissextiles
            printf("Le mois %d de l'annee %d a 29 jours\n", month, year);
        } else {
            printf("Le mois %d de l'annee %d a 28 jours\n", month, year);
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) { // Condition pour les mois de 30 jours
        printf("Le mois %d de l'annee %d a 30 jours\n", month, year);
    } else if (month > 0 && month <= 12) { // Condition pour les mois de 31 jours
        printf("Le mois %d de l'annee %d a 31 jours\n", month, year);
    }
    else {   // Condition pour les mois qui n'existent pas soit < 0 ou > 12
        printf("Le mois %d n'existe pas\n", month);
    }

    return 0;
}
