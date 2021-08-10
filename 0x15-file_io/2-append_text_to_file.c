#include "main.h"

/**
 * append_text_to_file - add text at the end of file
 * @filename: filename
 * @text_content: content
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int i = 0;

	op = open(filename, O_RDONLY | O_APPEND);

	if (filename == NULL)
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

		if (!op)
		{
			return (-1);
		}
	}

	close(op);
	return (1);
}
