#include "sort.h"

/**
 * insertion_sort - Sorts an array of integers in ascending order
 * using the insertion sort algorithm
 *
 * @array: Pointer to the array to sort
 * @size: Size of the array
 */
void insertion_sort(int *array, size_t size)
{
    size_t i, j;
    int tmp;

    if (array == NULL || size < 2)
        return;

    for (i = 1; i < size; i++)
    {
        tmp = array[i];
        j = i;

        while (j > 0 && array[j - 1] > tmp)
        {
            array[j] = array[j - 1];
            j--;
        }

        array[j] = tmp;
        print_array(array, size);
    }
}
