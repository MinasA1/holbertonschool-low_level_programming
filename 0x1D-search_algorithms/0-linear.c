#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 * Return: index of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i , array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
