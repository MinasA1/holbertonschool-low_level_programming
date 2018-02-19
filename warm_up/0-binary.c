#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: index of value, -1 if not found or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int j;
	size_t mid, i;

	if (!array || !size)
		return (-1);
	mid = (size - 1) / 2;
	printf("Searching in array:");
	for (i = 0; i < size; i++)
		printf(" %d%c", array[i], (i < (size - 1)) ? ',' : '\n');
	if (value == array[mid])
		return (mid);
	mid++;
	if (value < array[mid])
		return (binary_search(array, mid, value));
	j = binary_search(array + mid, size - mid, value);
	if (j == -1)
		return (-1);
	return (mid + j);
}
