#include "search_algos.h"
/**
 * _bsearch - helper function for binary search
 * @array: array to search in
 * @value: value to search for
 * @low: starting index
 * @high: ending index
 */
int _bsearch(int *array, size_t low, size_t high, int value)
{
	size_t i, mid;

	mid = (low + high) / 2;

	printf("Searching in array:");
	for (i = low; i < high; i++)
		{
			printf(" %lu", i);
			if (i == high - 1)
				printf("\n");
			else
				printf(",");
		}
	if (high - low == 1 && value > array[high])
		return (-1);
	if (high >= low)
		{
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			return _bsearch(array, 0, mid, value);
		else if (value > array[mid])
			return _bsearch(array, mid, high, value);
		}
	return (-1);
}
/**
 * binary_search - binary search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: index of value, -1 if not found or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i , mid;

	mid = size / 2;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
		{
			printf(" %lu", i);
			if (i == size - 1)
				printf("\n");
			else
				printf(",");
		}
	if (value == array[mid])
		return (mid);
	else if	(value > array[mid])
		return _bsearch(array, mid, size, value);
	else
		return _bsearch(array, 0, mid, value);

	return (-1);
}
