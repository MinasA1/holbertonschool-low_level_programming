#include "holberton.h"

/**
 * read_textfile -  reads a text file and prints it to stdout
 * @filename: name of file to read
 * @letters: number of letters to print
 * Return: returns num of letters in file or 0 if NULL, fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int c, fd, i = 0;
	ssize_t j = 0;
	char *text;

	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	c = read(fd, text, letters);
	if (c == -1)
		return (0);
	close(fd);
	while (text[i])
	{
		c = write(STDOUT_FILENO, &text[i], 1);
		if (c == -1)
			return (0);
		else if (c == 1)
			j++;
		i++;
	}
	free(text);
	return (j);
}
