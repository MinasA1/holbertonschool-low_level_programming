#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array with ints
 * @cmp: pointer to function that compares values
 * @size: size of array
 *
 * Return: index of element or -1 for false/error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, t;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		t = cmp(array[i]);
		if (t != 0)
			return (i);
	}
	return (-1);
}
