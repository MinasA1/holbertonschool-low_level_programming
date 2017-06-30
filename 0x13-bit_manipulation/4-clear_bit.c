#include "holberton.h"
/**
 * clear_bit - sets the bit value to 0 at a given index
 * @n: number to set the bit
 * @index: index of bit to change
 * Return: 1 or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * CHAR_BIT - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
