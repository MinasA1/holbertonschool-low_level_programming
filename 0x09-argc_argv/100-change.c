#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints minimum number of coins to give changes.
 *@argc: counts arguments
 *@argv: stores arguments in a pointer of arrays
 *Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int m, ch = 0, i, s;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	if (m < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			s = m / c[i];
			m -= s * c[i];
			ch += s;
			if (m == 0)
				break;
		}
	}
	printf("%d\n", ch);
	return (0);
}
