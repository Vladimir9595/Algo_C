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
Liste* liste_vide() {
    Liste *liste = malloc(sizeof(*liste));
    Noeud *noeud = malloc(sizeof(*noeud));

    if (liste == NULL || noeud == NULL)
    {
        exit(EXIT_FAILURE);
    }

    noeud->nombre = 0;
    noeud->suivant = NULL;
    liste->premier = noeud;

    return liste;
}

// ajout en tête de liste
Noeud* push_front(Liste* l, int val) {
    Noeud* n = malloc(sizeof(*n));
    if (n == NULL) {
        exit(EXIT_FAILURE);
    }
    n->nombre = val;
    n->suivant = l->premier;
    l->premier = n;
    return n;
}

// retirer la tête de liste
void pop_front(Liste* l) {
    if (l->premier != NULL) {
        Noeud* tmp = l->premier;
        l->premier = l->premier->suivant;
        free(tmp);
    }
}

// valeur en tête de liste
int front_val(Liste* l) {
    if (l->premier != NULL) {
        return l->premier->nombre;
    }
    return 0;
}

// affiche la liste
void print_list(Liste* l) {
    Noeud* n = l->premier;
    while (n != NULL) {
        printf("%d ", n->nombre);
        n = n->suivant;
    }
    printf("\n");
}

// teste si la liste est vide
bool empty(Liste* l) {
    return l->premier == NULL;
}


// trouver le premier element de la liste qui contient la valeur val
Noeud* trouve_premier(Liste* l, int val) {
    Noeud* n = l->premier;
    while (n != NULL) {
        if (n->nombre == val) {
            return n;
        }
        n = n->suivant;
    }
    return NULL;
}

// compte le nombre de val dans l

int occurrence(Liste* l, int val) {
    int cpt = 0;
    Noeud* n = l->premier;
    while (n != NULL) {
        if (n->nombre == val) {
            cpt++;
        }
        n = n->suivant;
    }
    return cpt;
}

// insert une valeur après un noeud
Noeud* insert_after(Noeud* c, int val) {
    Noeud* n = malloc(sizeof(*n));
    if (n == NULL) {
        exit(EXIT_FAILURE);
    }
    n->nombre = val;
    n->suivant = c->suivant;
    c->suivant = n;
    return n;
}

// retire un noeud de la liste
void retire(Liste* l, Noeud* n) {
    if (l->premier == n) {
        l->premier = n->suivant;
        free(n);
    } else {
        Noeud* tmp = l->premier;
        while (tmp != NULL && tmp->suivant != n) {
            tmp = tmp->suivant;
        }
        if (tmp != NULL) {
            tmp->suivant = n->suivant;
            free(n);
        }
    }
}

// ajout en fin de liste
Noeud* push_back(Liste* l, int val) {
    Noeud* n = malloc(sizeof(*n));
    if (n == NULL) {
        exit(EXIT_FAILURE);
    }
    n->nombre = val;
    n->suivant = NULL;
    if (l->premier == NULL) {
        l->premier = n;
    } else {
        Noeud* tmp = l->premier;
        while (tmp->suivant != NULL) {
            tmp = tmp->suivant;
        }
        tmp->suivant = n;
    }
    return n;

}

// retire le dernier noeud de la liste
void pop_back(Liste* l) {
    if (l->premier != NULL) {
        if (l->premier->suivant == NULL) {
            free(l->premier);
            l->premier = NULL;
        } else {
            Noeud* tmp = l->premier;
            while (tmp->suivant->suivant != NULL) {
                tmp = tmp->suivant;
            }
            free(tmp->suivant);
            tmp->suivant = NULL;
        }
    }
}

// dernière valeur de la liste
int back_val(Liste* l) {
    if (l->premier != NULL) {
        Noeud* tmp = l->premier;
        while (tmp->suivant != NULL) {
            tmp = tmp->suivant;
        }
        return tmp->nombre;
    }
    return 0;
}
