#include "sort.h"

/**
 * selection_sort - sorting algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return - nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int a;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		if (k != i)
		{
			a = array[i]
			array[i] = array[k];
			array[k] = tmp;
			print_array(array, size);
		}
	}
}
