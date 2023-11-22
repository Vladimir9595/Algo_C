#include <stdio.h>
#include <stdlib.h>


int calculateOne(int n) {
    // Cas de base : U_0 = 5
    if (n == 0) {
        return 5;
    } else {
        // Formule récursive : U_n = 2 * U_{n-1} - 1
        printf("%d\n", 2 * calculateOne(n - 1) - 1);
        return 2 * calculateOne(n - 1) - 1;
    }
}

int syracuse(int n)
{
    printf("%d\n", n);
    if (n == 1) {
        return 1;
    }
    else if (n % 2 == 0) {
        // printf("%d\n", syracuse(n / 2));
        syracuse(n / 2);
    } else
        // printf("%d\n", syracuse(3 * n + 1));
        syracuse(3 * n + 1);
}

int showNumbers(int n)
{
    if (n < 10) {
        printf("%d\n", n);
    } else {
        showNumbers(n / 10);
        printf("%d\n", n % 10);
    }
}

int showNumbers2(long int n)
{
    int index = 0;
    int array[100];

    while (n > 0)
    {
        //printf("%d\n", n % 10);
        array[index] = n % 10;
        n /= 10;
        index++;
    }

    for (int i = index-1; i >= 0; i--) {
        printf("%d\n", array[i]);
    }
}


int main()
{
    printf("\nSuites :\n");
    calculateOne(5);
    printf("\nSuite de syracuse :\n");
    syracuse(5);
    printf("\nAffichage des chiffres :\n");
    showNumbers(123456789);
    printf("\nAffichage des chiffres (itératif) :\n");
    showNumbers2(1234567891212121);

    return 0;
}