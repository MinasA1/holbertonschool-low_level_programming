#include "holberton.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file to append to
 * @text_content: text to append
 * Return: returns 1 on succesm , -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int c, fd, i = 0;

	if (text_content == NULL || text_content[0] == '\0')
		return (1);
	while (text_content[i])
		i++;
	if (filename == NULL || filename[0] == '\0')
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	c = write(fd, text_content, i);
	if (c == -1)
		return (-1);
	close(fd);
	return (1);
}
