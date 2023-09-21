#include <stdio.h>

int main() {
    int h1, m1, s1, h2, m2, s2; // Heure, minute et seconde du premier moment et du deuxième moment
    int durationInSec; // Calcul de la durée en secondes
    int h3, m3, s3; // Heure, minute et seconde finales

    // Demandez à l'utilisateur de saisir les valeurs pour le premier moment
    do {
        printf("Entrez l'heure, les minutes et les secondes du premier moment (hh::mm::ss) : ");
        scanf("%d::%d::%d", &h1, &m1, &s1);
    // Vérifiez si les valeurs saisies sont valides
    } while (h1 < 0 || h1 > 23 || m1 < 0 || m1 > 59 || s1 < 0 || s1 > 59);

    // Demandez à l'utilisateur de saisir les valeurs pour le deuxième moment
    do {
        printf("Entrez l'heure, les minutes et les secondes du deuxième moment (hh::mm::ss) : ");
        scanf("%d::%d::%d", &h2, &m2, &s2);
    // Vérifiez si les valeurs saisies sont valides
    } while (h2 < 0 || h2 > 23 || m2 < 0 || m2 > 59 || s2 < 0 || s2 > 59);


    if (h2 < h1 || (h2 == h1 && m2 < m1) || (h2 == h1 && m2 == m1 && s2 < s1)) {
        // Cas v2 : 2 jours consécutifs
        h2 += 24;
    }

    // Cas v1 : même jour
    durationInSec = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);

    // Calcul des heures, minutes et secondes finales
    h3 = durationInSec / 3600;
    m3 = (durationInSec % 3600) / 60;
    s3 = durationInSec % 60;

    // Affiche le temps passé avec deux ciffres pour les heures, les minutes et les secondes
    printf("Voici le temps passé : %02d::%02d::%02d\n", h3, m3, s3);


    return 0;
}
