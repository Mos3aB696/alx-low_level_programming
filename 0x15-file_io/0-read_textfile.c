#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the file name
 * @letters: the number of letter it could read and print
 *
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	buf = (char *)malloc(sizeof(char) * letters);
	if (!buf || !filename)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || w == -1 || r != w)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(o);
	return (w);
}
