#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: file to be opened
 * @letters:  letters is the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *buf;
	ssize_t x;

	buf = malloc(letters);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	x = write(STDOUT_FILENO, buf, rd);
	if (x < rd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (x);
}
