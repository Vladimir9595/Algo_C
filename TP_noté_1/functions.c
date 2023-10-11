#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonction pour initialiser un tableau d'entiers ordonné
void initializeTable(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }
}

// Fonction pour mélanger un tableau d'entiers
void swape(int array[], int size) {
    for (int i = 0; i < size; i++) {
        int j = rand() % size;
        // Échangez array[i] et array[j]
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

// Fonction pour afficher un tableau d'entiers
void printTable(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
