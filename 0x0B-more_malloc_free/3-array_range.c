#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - creates an array of int
 *@min: smallest number
 *@max: biggest number
 *
 *Return: pointer allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 10));
	if (p == NULL)
		return (NULL);
	for (i = 0; min = max; i++)
	{
		p[i]= min;
		min++;
	}
	return (p);
}
