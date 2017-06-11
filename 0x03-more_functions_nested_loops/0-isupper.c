#include "holberton.h"

/**
 * _isupper - checks if char is uppercase
 * @c: char to check
 *
 * Return: 0 for false and 1 for true
 */


int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
