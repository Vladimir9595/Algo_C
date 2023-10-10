#ifndef FUNCTIONS_H // Directives de préprocesseur pour éviter l'inclusion multiple
#define FUNCTIONS_H

typedef int DATA; // Definition du type de donnees

void print(DATA array[], int SIZE);

void read(DATA array[], int SIZE);

void random_fill_int(DATA array[], int SIZE, DATA vmin, DATA vmax);

void random_fill_float(float array[ ], int SIZE, DATA vmin, DATA vmax);

DATA max_value(DATA array[], int SIZE);

void swap_elt(DATA array[], int SIZE, int i, int j);

int events(DATA array[], int SIZE, DATA el);

int find_first( DATA array[ ], int size, DATA el );

#endif // Fin de la directive de préprocesseur