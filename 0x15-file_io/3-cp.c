#include "main.h"

/**
 * copy_file - copy a specific file
 * @arg1: arg
 * @arg2: arg2
 */

void copy_file(const char *arg1, const char *arg2)
{
	int op, cop, rd;
	char buf[1024];

	op = open(arg1, O_RDONLY);

	if (!arg1 || op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}

	cop = open(arg2, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((rd = read(op, buf, 1024)) > 0)
	{
		if (write(cop, buf, rd) != rd || cop == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg2);
			exit(99);
		}
	}

	if (close(op) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op);
		exit(100);
	}

	if (close(cop) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cop);
		exit(100);
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}
}

/**
 * main - main function
 * @argc: count of args
 * @argv: args
 * Return: value
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}
