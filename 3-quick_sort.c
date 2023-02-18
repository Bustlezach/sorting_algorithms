#include "sort.h"

/**
 * swapElements - Swaps the values of two integer pointers
 *
 * @x: Pointer to the first integer
 * @y: Pointer to the second integer
 */
void swapElements(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

/**
 * partition - Partitions an array around a pivot element
 *
 * @array: Pointer to the array to be sorted
 * @start: Index of the start of the partition
 * @end: Index of the end of the partition
 *
 * Return: Index of the pivot element
 */
int partition(int *array, int start, int end)
{
    int pivot = array[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swapElements(&array[i], &array[j]);
        }
    }
    swapElements(&array[i + 1], &array[end]);
    return i + 1;
}

/**
 * quick_sort - Sorts an integer array in ascending order using the QuickSort algorithm
 *
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
    if (size <= 1) return;
    int start = 0, end = size - 1;
    int pivot = partition(array, start, end);
    print_array(array, size);
    quick_sort(array, pivot);
    quick_sort(array + pivot + 1, size - pivot - 1);
}

