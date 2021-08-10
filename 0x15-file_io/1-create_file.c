#include "main.h"

/**
 * create_file - function that create a file
 * @filename: filename
 * @text_content: content
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int op;
	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (op == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}

		write(op, text_content, i);
	}

	close(op);
	return (1);
}
