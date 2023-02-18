#include "sort.h"

/**
 * insertion_sort - sorts an array of integers in ascending order using
 * the Insertion sort algorithm
 *
 * @array: pointer to the array to sort
 * @size: size of the array
 */
void insertion_sort(int *array, size_t size)
{
	size_t i, moveItem;
	int current;

	for (i = 1; i < size; i++)
	{
		moveItem = i;
		current = array[i];

		while (moveItem > 0 && array[moveItem - 1] > current)
		{
			array[moveItem] = array[moveItem - 1];
			moveItem--;
		}
		array[moveItem] = current;
		print_array(array, size);
	}
}
