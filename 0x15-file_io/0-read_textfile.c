#include "main.h"

/**
 * read_textfile - function that read a textfile
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t rd;
	ssize_t op;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL || filename == NULL)
	{
		return (0);
	}

	op = open(filename, O_RDONLY);

	rd = read(op, buffer, letters);

	write(STDOUT_FILENO, buffer, letters);

	if (op == -1)
	{
		return (0);
	}

	free(buffer);
	close(op);
	return (rd);
}
