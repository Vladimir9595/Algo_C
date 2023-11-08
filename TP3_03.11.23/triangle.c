// Triangle de Pascal

#include <stdio.h>
#include <math.h>

// Declaration des variables reelles
#define INDEX(L,C) ((L(L+1)/2) + C)

void init_pascal(int tri, int nbl) {

    tri[INDEX(0,0)] = 1;
    tri[INDEX(1,0)] = 1;
    tri[INDEX(1,1)] = 1;

    for(int i = 2; i < nbl; i++) {
        tri[INDEX(i,0)] = 1;
        for(int j = 1; j < i; j++){
            tri[INDEX(i,j)] = tri[INDEX(i-1, j-1)] + tri[INDEX(i-1,j)];
        }
        tri[INDEX(i,i)] = 1;
    }
}