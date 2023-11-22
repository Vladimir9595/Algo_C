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



int main()
{
    printf("\nSuites :\n");
    calculateOne(5);


    return 0;
}