#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "functions.h"

typedef int DATA; // Definition du type de donnees

int main()
{
    // Initialiser le générateur de nombres aléatoires avec une graine basée sur l'horloge
    srand(time(NULL));

    const int SIZE = 4;
    DATA array[SIZE];
    read(array, SIZE);
    print(array, SIZE);
    random_fill_int(array, SIZE, 0, 10);
    float array_float[SIZE];
    random_fill_float(array_float, SIZE, 0, 15);
    max_value(array, SIZE);

    // Affichage du tableau avant l'échange
    printf("Tableau avant l'échange :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Appel de la fonction swap_elt pour échanger deux éléments (par exemple, indices 1 et 3)
    swap_elt(array, SIZE, 1, 3);

    // Affichage du tableau après l'échange
    printf("Tableau après l'échange :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    DATA researched_value = 2;

    int nb_events = events(array, SIZE, researched_value);

    printf("Le nombre d'occurrences de %d dans le tableau est : %d\n", researched_value, nb_events);

    int first = find_first(array, SIZE, researched_value);

    printf("L'indice de la première occurrence de %d dans le tableau est : %d\n", researched_value, first);

    int last = find_last(array, SIZE, researched_value);

    printf("L'indice de la dernière occurrence de %d dans le tableau est : %d\n", researched_value, last);

    reverse(array, SIZE);

    rotate_left(array, SIZE);

    rotate_right(array, SIZE);

    bool palindrome = is_palindrome(array, SIZE);

     if (palindrome) {
        printf("Le tableau est un palindrome.\n");
    } else {
        printf("Le tableau n'est pas un palindrome.\n");
    }

    return 0;
}