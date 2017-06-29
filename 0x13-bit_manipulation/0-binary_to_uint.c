#include "holberton.h"

/**
 * binary_to_uint - converts a bin to unsigned int
 * @b: string with binary number
 * Return: converter number or 0 if NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0, j = 1;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	for (i = i - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			c += j;
		j *= 2;
	}
	return (c);
}
