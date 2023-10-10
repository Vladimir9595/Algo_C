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