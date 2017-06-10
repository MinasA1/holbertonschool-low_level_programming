#include "holberton.h"
#include <stdlib.h>

/**
 *_realloc - reallocate memory using malloc and free
 *@ptr: pointer to reallocate
 *@old_size: size of ptr
 *@new_size: memory size to reallocate
 *
 * Return: reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (ptr == NULL)
		return (p);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = ptr[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			p[i] = ptr[i];
	}
	free(ptr);
	return (p);
}
