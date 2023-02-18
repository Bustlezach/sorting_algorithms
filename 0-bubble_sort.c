#include "sort.h"

/**
 * swap - Swaps two integers.
 * @a: Pointer to an integer.
 * @b: Pointer to an integer.
 *
 * Return: void.
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 * Bubble sort algorithm.
 * @array: Pointer to an array of integers.
 * @size: Size of the array.
 *
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
