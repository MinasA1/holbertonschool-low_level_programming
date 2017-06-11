#include "holberton.h"

/**
 * _isalpha - checks if char is alphabetic
 * @c: char to check
 *
 * Return: 0 if false and 1 if true
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
