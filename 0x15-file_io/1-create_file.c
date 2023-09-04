#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: the file's text content
 * Return: 1 (Success) -1 (Error)
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, i;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for(i = 0; text_content[i] != '\0'; i++);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, i);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
