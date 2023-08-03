/*
Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.
*/
#include <stdlib.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    for( i= 0; (unsigned int) i < size - 1; i++)
        for(j = 0 ; (unsigned int) j < size - i - 1; j++)
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j + 1] = temp;
            }
}

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size);

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    unsigned int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sort_int_tab(arr, size);

    printf("Sorted Array: ");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
