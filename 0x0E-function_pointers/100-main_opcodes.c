#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints n bytes of opcode in hex
 *
 * Return - 1 for incorrect args 2 for negative bytes
 */

int main(int argc, char *argv[])
{
	unsigned int i;
	/*int (*mem)();*/

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	/*mem = &main;*/
	for (i = 0; i < atoi(argv[1]); i++)
		printf("%.2x ", ((unsigned char *)main)[i]);
	printf("\n");
	return (0);
}
