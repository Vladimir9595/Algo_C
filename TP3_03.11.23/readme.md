<h1 align="center"> Enoncé exos TP 3 SDA Les pointeurs </h1>

## Exos

### Arithmétique des pointeurs

1. expérimenter (vérifier en affichant les valeurs des adresses)
   - printf %p pour les pointeurs, %ld pour les entiers 64bits
   - conversion en long int puis différence pour les “vrais” valeurs !
2. vérifier l'alignement de variables de différents types déclarées successivement
3. vérifier l'alignement des cases d’un tableau
4. vérifier l’effet de ++ sur un pointeur

### Fonction à plusieurs résultats

1. Faire une fonction qui calcule le min, le max, et la moyenne d’un tableau de float. La fonction renvoit les trois résultats par trois pointeurs passés en paramètres.

### Chaînes de caractères:

1. int longueur(char\*)
2. bool compare(char*, char*)
3. bool palindrome(char\*)
4. int find_sub_string(char*, char*) // retourne la position de la sous-chaine sinon -1
5. Ecrire la fonction string_to_int qui convertit une chaîne en l’entier correspondant (Exemple “327” en 327) équivalent à atoi(“327”);

### argc/argv (pointeur de pointeurs)

1. int main(int argc, char \*\*argv)
2. afficher les paramètres du programme
3. evaluer une expression simple (entiers + et - ) passée en paramètre:
   - exemple 13 + 2 - 1 + -3 chaque chiffre et opération séparé par des espaces.

### Tableaux et pointeurs

1. définir un tableaux d’entier 3D
2. coder des fonctions d’accès à un élément d’indices i,j,k (get/set)
   - on n’utilisera pas [ ]
   - on passera en paramètre un pointeur sur la première case, i,j,k et ?
3. faire une fonction qui initialise tout le tableau à zéro
4. vérifier que l’accès par la fonction est équivalent à [ i ] [ j ] [ k ]

### Triangle de Pascal

1. Rappel: tableau triangulaire rempli comme suit:
2. T[ 0,j ] = T[ j,j ] = 1
3. T[ i,j ] = T[ i-1,j-1 ] + T[ i-1,j ]
4. on stockera les valeurs dans un tableau 1D (taille du triangle choisie à la compilation) en utilisant toutes les cases du tableau
5. Coder sans utiliser l’accès par [ ] ( utiliser les pointeurs) les fonctions suivantes:
   - remplissage du triangle
   - affichage du triangle
