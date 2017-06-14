#include <stdlib.h>

/**
 * array_iterator - utilizes function f to print name
 * @array: array to print
 * @action: pointer to function that will print
 * @size: size of array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	else
	{
		for ( i = 0; i < size; i++)
			action(array[i]);
	}
}
