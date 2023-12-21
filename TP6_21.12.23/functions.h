#ifndef FUNCTIONS_H // Directives de préprocesseur pour éviter l'inclusion multiple
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Noeud Noeud;
struct Noeud
{
    int nombre;
    Noeud *suivant;
};
typedef struct Liste Liste;
struct Liste
{
    Noeud *premier;
};

    Liste* liste_vide();
Noeud* push_front(Liste* l, int val);
void pop_front(Liste* l);
int front_val(Liste* l);
void print_list(Liste* l);
bool empty(Liste* l);
Noeud* trouve_premier(Liste* l, int val);
int occurrence(Liste* l, int val);
Noeud* insert_after(Noeud* c, int val);
void retire(Liste* l, Noeud* n);
Noeud* push_back(Liste* l, int val);
void pop_back(Liste* l);
int back_val(Liste* l);

#endif // Fin de la directive de préprocesseur