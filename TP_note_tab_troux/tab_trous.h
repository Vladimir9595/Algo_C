#ifndef TAB_TROUS_H
#define TAB_TROUS_H

#include <stdbool.h>

typedef struct {
    double *data;     // Tableau dynamique contenant les données
    char *holes;      // Chaine de caractères pour représenter les trous
    int size;         // Taille réelle du tableau
    int elements;     // Nombre d'éléments dans le tableau
    int first_index;  // Indice de la première case avec des données
} TableauATrous;

TableauATrous* create(int szm);
void destroy(TableauATrous* table);
bool is_empty(TableauATrous* table);
bool is_full(TableauATrous* table);
int get_first_index(TableauATrous* table);
int get_next_index(TableauATrous* table, int index);
void print(TableauATrous* table);
void clear(TableauATrous* table);
int insert(TableauATrous* table, double val);
double get_value(TableauATrous* table, int index);
void set_value(TableauATrous* table, int index, double value);
bool release(TableauATrous* table, int index);
int find_first_value(TableauATrous* table, double val);
int find_nb_occurences(TableauATrous* table, double value);
void shrink(TableauATrous* table);
void swap(TableauATrous* table, int i, int j);
void bubble_sort(TableauATrous* table);

#endif /* TAB_TROUS_H */
