#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

int main()
{
    srand(time(NULL)); // Initialise le générateur de nombres aléatoires avec une graine basée sur l'horloge

    int size = 10; // Taille du tableau
    int array[size];

    // Initialisation du tableau
    initializeTable(array, size);

    printf("Tableau initial : ");
    printTable(array, size);

    // Mélange du tableau
    swape(array, size);

    printf("Tableau mélangé : ");
    printTable(array, size);

    return 0;
}