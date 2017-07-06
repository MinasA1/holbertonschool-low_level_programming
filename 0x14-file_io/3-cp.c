#include "holberton.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @ac: argument counter
 * @av: pointer cointaining args passed in
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fdin, fdout, in, out;
	char buff[1024];
	mode_t perm = (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (ac != 3)
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28), exit(97);
	fdin = open(av[1], O_RDONLY);
	if (fdin == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fdout = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (fdout == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	in = read(fdin, buff, 1024);
	while (in)
	{
		if (in == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		out = write(fdout, buff, in);
		if (out == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		in = read(fdin, buff, 1024);
	}
	in = close(fdin);
	if (in == -1)
		dprintf(2, "Error: Can't close fd %d\n", fdin), exit(100);
	out = close(fdout);
	if (out == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdout);
		exit(100);
	}
	return (0);
}
