#include "holberton.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: argument counter
 * @argv: pointer cointaining args passed in
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fdin, fdout, in, out;
	char buff[1024];

	if (ac != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}
	fdin = open(argv[1], O_RDONLY);
	if (fdin == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdout = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdout == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	in = read(fdin, buff, 1024);
	while (in)
	{
		if (in == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		out = write(fdout, buff, in);
		if (out == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		in = read(fdin, buff, 1024);
	}
	in = close(fdin);
	if (in == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdin);
		exit(100);
	}
	out = close(fdout);
	if (out == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdout);
                exit(100);
	}
	return (0);
}