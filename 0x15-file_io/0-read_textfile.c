#include "main.h"

/**
 * read_textfile - Reads a text file and outputs it to the POSIX stdout
 * @filename: name of the file
 * @letters: no. of letters it should print
 * Return: The count of numbers read and printed (Success) 0 (Error)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	o = open(filename, 0);
	r = read(o, buff, letters);
	w = write(1, buff, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}
