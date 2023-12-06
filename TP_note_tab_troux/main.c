#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include "tab_trous.h"

int main() {
// /*
    // Exemple d'utilisation 1
    TableauATrous* table = create(5);

    insert(table, 5.0);
    insert(table, 2.0);
    insert(table, 8.0);

    print(table);

    bubble_sort(table);

    print(table);

    destroy(table);
// */

/*
    // Exemple d'utilisation 2

    TableauATrous* tat = create(12);

    int i1 = insert(tat, 1.2);
    print(tat);

    int j = find_first_value(tat, 1.2);
    assert(j == i1);
    release(tat, j);
    print(tat);

    int i3 = insert(tat, 3.4);
    print(tat);

    // int i4 = insert(tat, 5.5);
    // int i5 = insert(tat, 5.5);
    release(tat, i3);
    print(tat);
    printf("Nb occurence de 5.5 = %d\n", find_nb_occurences(tat, 5.5));

    clear(tat);
    print(tat);

    int i = 0;
    while (!is_full(tat))
    {
        insert(tat, (i % 2 == 0) ? 3.1415 : 0.1 * i);
        i++;
    }

    print(tat);

    int nba;
    do
    {
        nba = find_first_value(tat, 3.1415);
        if (nba >= 0)
            release(tat, nba);
    } while (nba >= 0);

    print(tat);

    puts("bubble_sort");
    bubble_sort(tat);
    print(tat);

    release(tat, 1);
    release(tat, 3);
    print(tat);

    puts("shrink");
    shrink(tat);
    print(tat);

    destroy(tat);
*/

    return 0;
}
