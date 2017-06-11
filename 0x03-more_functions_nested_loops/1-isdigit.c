#include "holberton.h"

/**
 * _isdigit - checks if var is digit
 * @c: var to check
 *
 * Return: 0 for false and 1 for true
 */


int _islower(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
