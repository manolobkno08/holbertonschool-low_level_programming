#include "main.h"

/**
 * read_textfile - function that read a textfile
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* declare pointer to allocate the lenght */
	char *buffer;
	ssize_t rd;
	ssize_t op;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL || filename == NULL)
	{
		return (0);
	}

	/* open file for read only assigned to var open */
	op = open(filename, O_RDONLY);
	/* function read assigned to var */
	rd = read(op, buffer, letters);
	/* write function */
	write(STDOUT_FILENO, buffer, letters);

	/* if exist any error of open return 0 */
	if (op == -1)
	{
		return (0);
	}
	/* release buffer */
	free(buffer);
	close(op);
	return (rd);
}
