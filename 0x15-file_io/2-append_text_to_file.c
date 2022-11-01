#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (filename)
	{
		if (text_content == NULL)
			return (1);
		fd = open(filename, O_RDWR | O_APPEND);
		if (fd == -1)
			return (-1);
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(fd, text_content, i);
		close(fd);
		return (1);
	}
	return (-1);
}
