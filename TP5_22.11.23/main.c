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



int main()
{
    printf("\nSuites :\n");
    calculateOne(5);
    printf("\nSuite de syracuse :\n");
    syracuse(5);

    return 0;
}