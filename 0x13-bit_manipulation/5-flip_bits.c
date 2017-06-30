#include "holberton.h"
/**
 * flip_bits - returns the number of bits you need to flip to get from n to m
 * @n: number to check
 * @m: desired number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = (sizeof(n) * CHAR_BIT - 1);
	unsigned int bits = 0;

	while (i >= 0)
	{
		if (((n ^ m) >> i) & 1)
			bits++;
		i--;
	}
	return (bits);
}
