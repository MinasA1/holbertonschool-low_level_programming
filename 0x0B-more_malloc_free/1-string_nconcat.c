#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings.
 *@s1: first pointer
 *@s2: second pointer
 *@n: amount of bytes to add
 *
 *return: new pointer or NULL in case of error
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned i, j, t;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	c = malloc(sizeof(char) * (i + j + 1));
	if (c == NULL)
		return (NULL);
	for (t = 0; t < i; t++)
		c[t] = s1[t];
	for (t = 0; t < j; t++)
		c[t + i] = s2[t];
	c[i + j] = '\0';
	return (c);
}
