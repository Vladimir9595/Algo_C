#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tab_trous.h"


TableauATrous* create(int szm) {
    TableauATrous *table = (TableauATrous*)malloc(sizeof(TableauATrous));
    table->data = (double*)malloc(szm * sizeof(double));
    table->holes = (char*)malloc(szm * sizeof(char));

    table->size = szm;
    table->elements = 0;
    table->first_index = 0;

    for (int i = 0; i < szm; ++i) {
        table->holes[i] = 'T';  // Initialiser tous les éléments comme trous
    }

    return table;
}

void destroy(TableauATrous* table) {
    free(table->data);
    free(table->holes);
    free(table);
}

bool is_empty(TableauATrous* table) {
    return table->elements == 0;
}

bool is_full(TableauATrous* table) {
    return table->elements == table->size;
}

int get_first_index(TableauATrous* table) {
    return table->first_index;
}

int get_next_index(TableauATrous* table, int index) {
    // Fonctionne en supposant que l'index donné est valide
    return (index + 1) % table->size;
}

void print(TableauATrous* table) {
    printf("Tableau:\n");
    for (int i = 0; i < table->size; ++i) {
        printf("[%d]: %.2f (%c)  ", i, table->data[i], table->holes[i]);
    }
    printf("\n");
}

void clear(TableauATrous* table) {
    table->elements = 0;
    table->first_index = 0;

    for (int i = 0; i < table->size; ++i) {
        table->holes[i] = 'T';
    }
}

int insert(TableauATrous* table, double val) {
    if (is_full(table)) {
        return -1;  // Impossible d'insérer, tableau plein
    }

    int index = table->first_index;

    while (table->holes[index] == 'D') {
        index = get_next_index(table, index);
    }

    table->data[index] = val;
    table->holes[index] = 'D';
    table->elements++;

    // Mettre à jour l'indice de la première case occupée
    while (table->holes[table->first_index] == 'D') {
        table->first_index = get_next_index(table, table->first_index);
    }

    return index;
}

double get_value(TableauATrous* table, int index) {
    // Assumer que l'index donné est valide
    return table->data[index];
}

void set_value(TableauATrous* table, int index, double value) {
    // Assumer que l'index donné est valide
    table->data[index] = value;
}

bool release(TableauATrous* table, int index) {
    if (table->holes[index] == 'T') {
        return false;  // La case est déjà libre
    }

    table->holes[index] = 'T';
    table->elements--;

    if (index < table->first_index) {
        table->first_index = index;
    }

    return true;
}

int find_first_value(TableauATrous* table, double val) {
    for (int i = 0; i < table->size; ++i) {
        if (table->holes[i] == 'D' && table->data[i] == val) {
            return i;  // Trouvé
        }
    }
    return -1;  // Non trouvé
}

int find_nb_occurences(TableauATrous* table, double value) {
    int count = 0;
    for (int i = 0; i < table->size; ++i) {
        if (table->holes[i] == 'D' && table->data[i] == value) {
            count++;
        }
    }
    return count;
}

void shrink(TableauATrous* table) {
    table->data = realloc(table->data, table->elements * sizeof(double));
    table->holes = realloc(table->holes, table->elements * sizeof(char));
    table->size = table->elements;
}

void swap(TableauATrous* table, int i, int j) {
    // Assumer que les indices donnés sont valides
    double temp_data = table->data[i];
    char temp_holes = table->holes[i];

    table->data[i] = table->data[j];
    table->holes[i] = table->holes[j];

    table->data[j] = temp_data;
    table->holes[j] = temp_holes;
}

void bubble_sort(TableauATrous* table) {
    for (int i = 0; i < table->elements - 1; ++i) {
        for (int j = 0; j < table->elements - i - 1; ++j) {
            if (table->data[j] > table->data[j + 1]) {
                swap(table, j, j + 1);
            }
        }
    }
}