#include "holberton.h"

/**
 * rev_string - revers a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char si;

	for (i = 0; s[i]; i++)
		;
	j = i - 1;
	for (i = 0; i < j - i; i++)
	{
		si = s[i];
		s[i] = s[j-i];
		s[j-i] = si;
	}
}
