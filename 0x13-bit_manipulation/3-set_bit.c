#include "holberton.h"
/**
 * set_bit - sets the bit value to 1 at a given index
 * @n: number to set the bit
 * @index: index of bit to change
 * Return: 1 or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * CHAR_BIT - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}
