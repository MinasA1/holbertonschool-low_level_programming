#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array, using malloc.
 *@nmemb: number of elements in the array
 *@size: size of the elements
 *
 *Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; ++i)
		p[i] = 0;
	return (p);
}
