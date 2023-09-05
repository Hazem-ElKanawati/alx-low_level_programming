#include "main.h"

/**
 * handle_errors - handle errors for the program
 * @x: the error code
 * @n: name of the file
 */
void handle_errors(int x, char *n)
{
	if (x == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (x == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", n);
		exit(98);
	}
	if (x == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", n);
		exit(99);
	}

}

/**
 * main - copies content from file to another file
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 (Success) 1 (Error)
 */

int main(int argc, char *argv[])
{
	int op, wr, rd, op1, c1, c2;
	char buff[1024];

	if (argc != 3)
		handle_errors(97, argv[1]);
	op = open(argv[1], O_RDONLY);
	op1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (op == -1)
		handle_errors(98, argv[1]);
	if (op1 == -1)
		handle_errors(99, argv[2]);

	do {
		rd = read(op, buff, sizeof(buff));
		wr = write(op1, buff, rd);
		if (rd == -1)
			handle_errors(98, argv[1]);
		if (wr == -1)
			handle_errors(99, argv[2]);

	} while (rd == 1024);
	c1 = close(op);
	c2 = close(op1);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op);
	}
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op1);
	}
	return (0);

}
