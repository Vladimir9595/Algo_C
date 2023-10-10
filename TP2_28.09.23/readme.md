<h1 align="center">TP 2 SDA Les tableaux</h1>

## Exos:

### Tableaux 1D (DATA = int)

Ecrire les fonctions suivantes ainsi que les tests correspondants:

- DATA est le type du tableau (pour distinguer valeur/indice)
- void print( DATA array[ ], int size )
- void read( DATA array[ ], int size )
- void random_fill_int(DATA array[ ], int size, DATA vmin, DATA vmax);
- void random_fill_float(DATA array[ ], int size, DATA vmin, DATA vmax);
- DATA valeur_max( DATA array[ ], int size )
- void swap_elt( DATA array[ ], int size, int i, int j )
- int occurrences( DATA array[ ], int size, DATA el )
- int find_first( DATA array[ ], int size, DATA el )
- int find_last( DATA array[ ], int size, DATA el )
- void reverse( DATA array[ ], int size )
- void rotate_right( DATA array[ ], int size )
- void rotate_left( DATA array[ ], int size )
- bool is_palindrome( DATA array[ ], int size )
  Remarque on travaille ici par effet de bord ! (par opposition à fonctionel)

## Implanter le drapeau hollandais

- on utilisera ici un tableau de char
- on utilisera rand( ) [et srand( )] pour générer des nombres aléatoire
- générer un tableau (taille 30) contenant aléatoirement les caractères R W B
- implanter la solution linéaire en 1 passe
- afficher le résultat à chaque étape
- vérifier qu’on est bien en O(n)

## variante à 2 ensembles de réels

- Le but est de trier un tableau de réels en mettant tous les négatifs avant les positifs
- générer un tableau contenant aléatoirement des réels entre -1 et 1
- implanter une solution linéaire en 1 passe
- afficher le résultat à chaque étape

## Tableaux 2D (int)

- Ecrire les fonction suivante ainsi que les test correspondant:
- void print2( DATA array[ ] [ 3 ], int size ) // size = nb_lignes ou nb_elts ?
- void read2( DATA array[ ] [ 3 ], int size )
- DATA valeur_max2( DATA array[ ] [ 3 ], int size )
- int occurrences2( DATA array[ ] [ 3 ], int size, int el )
- bool is_sudoku( int array[ 3 ] [ 3 ] ) (les éléments sont les nombres 1,..,9 sans répétition)

## Matrices 3x3 réelles

- utiliser typedef float Mat33[ 3 ] [ 3 ];
- readMat(Mat33 M)
- setId(Mat33 M) initialize à la matrice identité (diagonale à 1, le reste à 0)

  - faire une version optimisée (2 boucles, 1 passe et pas de if)

- printMat(Mat33 M)
- somme(Mat33 A, Mat33 B, Mat33 ApB)
- produit(Mat33 A, Mat33 B, Mat33 AfB)

_Attention l’utilisation du typedef qui cache le tableau porte ici à confusion, car il devient difficile de deviner que l’on travaille avec effet de bord._
