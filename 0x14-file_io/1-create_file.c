#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to add in file
 * Return: returns 1 on succesm , -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int c, fd, i = 0, j = 0;

	while (text_content[i])
		i++;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR11);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL || text_content[0] == '\0')
		return (1);
	c = write(fd, text_content, i);
	if (c == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (j);
}
