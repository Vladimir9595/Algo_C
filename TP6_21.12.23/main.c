#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"

// Structure de la liste des éléments
// Element correspond à un élément de la liste et que l'on peut dupliquer autant de fois que nécessaire.

typedef struct Noeud Noeud;
struct Noeud
{
    int nombre;
    Noeud *suivant;
};

// structure de contrôle
// Liste contrôle l'ensemble de la liste. Nous n'en aurons besoin qu'en un seul exemplaire.

typedef struct Liste Liste;
struct Liste
{
    Noeud *premier;
};

// génère une liste vide
int main() {
    Liste* liste_vide()
Noeud* push_front(Liste* l, int val)
void pop_front(Liste* l)
int front_val(Liste* l)
void print_list(Liste* l)
bool empty(Liste* l)
Noeud* trouve_premier(Liste* l, int val)
int occurrence(Liste* l, int val)
Noeud* insert_after(Noeud* c, int val)
void retire(Liste* l, Noeud* n)
Noeud* push_back(Liste* l, int val)
void pop_back(Liste* l)
int back_val(Liste* l);
}