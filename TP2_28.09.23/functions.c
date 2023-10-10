#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef int DATA; // Definition du type de donnees

void print(DATA array[], int SIZE) {
    printf( "Voici les élements du tableau : " );
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);
    }
    printf( "\n" );
}

void read(DATA array[], int SIZE) {
    printf( "Entrer %d élements dans le tableau : \n", SIZE );
    for ( int i = 0; i < SIZE; i++ ) {
        printf("Entrer l'élément %d : ", i + 1);
        scanf("%d", &array[i]);
    }
    printf( "\n" );
}

void random_fill_int(DATA array[], int SIZE, DATA vmin, DATA vmax) {
    for ( int i = 0; i < SIZE; i++ ) {
        // Générer un nombre aléatoire entre vmin et vmax inclus
        array[i] = rand() % (vmax - vmin + 1) + vmin;
    }
    // Affichage du contenu du tableau
    printf("Contenu du tableau rempli de valeurs aléatoires : \n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void random_fill_float(float array[ ], int SIZE, DATA vmin, DATA vmax) {

    for ( int i = 0; i < SIZE; i++ ) {
        array[i] = (float)rand() / (float)(RAND_MAX / (vmax - vmin)) + vmin;
    }

    // Affichage du contenu du tableau
    printf("Contenu du tableau rempli de valeurs aléatoires float : \n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

// Fonction pour trouver la valeur maximale dans le tableau
DATA max_value(DATA array[], int SIZE) {
    // Vérifier si le tableau est vide
    if (SIZE <= 0) {
        printf("Le tableau est vide.\n");
        return 0; // Retourner une valeur par défaut (0 dans ce cas)
    }

    // Initialiser la valeur maximale à la première valeur du tableau
    DATA max = array[0];

    // Parcourir le tableau pour trouver la valeur maximale
    for (int i = 1; i < SIZE; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;

    printf("La valeur maximale dans le tableau est : %d\n", max);
}

void swap_elt(DATA array[], int SIZE, int i, int j) {
    // Vérifier que les indices i et j sont valides
    if (i >= 0 && i < SIZE && j >= 0 && j < SIZE) {
        // Échanger les éléments aux indices i et j en utilisant une variable temporaire
        DATA temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    } else {
        printf("Indices invalides. Aucun échange effectué.\n");
    }
}

// Fonction pour compter les occurrences de la valeur el dans le tableau
int events(DATA array[], int SIZE, DATA el) {
    int counter = 0; // Initialiser le compteur d'occurrences à zéro

    for (int i = 0; i < SIZE; i++) {
        if (array[i] == el) {
            counter++; // Incrémenter le compteur si l'élément est égal à el
        }
    }

    return counter;
}

int find_first( DATA array[], int SIZE, DATA el ) {
    for ( int i = 0; i < SIZE; i++ ) {
        if ( array[i] == el ) {
            return i;
        }
    }
    return -1;
}

int find_last( DATA array[], int SIZE, DATA el ) {
    for ( int i = SIZE - 1; i >= 0; i-- ) {
        if ( array[i] == el ) {
            return i;
        }
    }
    return -1;
}

void reverse( DATA array[], int SIZE ) {
    for ( int i = 0; i < SIZE / 2; i++ ) {
        swap_elt( array, SIZE, i, SIZE - 1 - i );
    }
      print(array, SIZE);
}

void rotate_right( DATA array[], int SIZE ) {
    DATA temp = array[SIZE - 1];
    for ( int i = SIZE - 1; i > 0; i-- ) {
        array[i] = array[i - 1];
    }
    array[0] = temp;
    print(array, SIZE);
}

void rotate_left( DATA array[], int SIZE ) {
    DATA temp = array[0];
    for ( int i = 0; i < SIZE - 1; i++ ) {
        array[i] = array[i + 1];
    }
    array[SIZE - 1] = temp;
    print(array, SIZE);
}

bool is_palindrome( DATA array[], int SIZE ) {
    for ( int i = 0; i < SIZE / 2; i++ ) {
        if ( array[i] != array[SIZE - 1 - i] ) {
            return false;
        }
    }
    return true;
}
