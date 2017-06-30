#include "holberton.h"

/**
 * get_bit - return the value of a bit in a given index
 * @n: number to get the bit
 * @index: index of bit to return
 * Return: index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i = (sizeof(n) * CHAR_BIT - 1), j = index;

	if ((n == 0) & (index == 0))
		return (0);
	else if ((n == 0) & index)
		return (-1);
	while (i >= 0)
	{
		if (i == j)
			return ((n >> i) & 1);
		i--;
	}
	return (-1);
}
