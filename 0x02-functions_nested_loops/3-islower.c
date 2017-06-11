#include "holberton.h"

/**
 * _islower - checks if char is lowercase
 * @c: char to check
 *
 * Return: 0 for false and 1 for true
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
