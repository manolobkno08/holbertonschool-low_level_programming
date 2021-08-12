#include "main.h"

/**
 * main - function main
 * @argc: count of args
 * @argv: args passed to function
 * Return: Value
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

/**
 * copy_file - copy a specific file
 * @origin: first arg
 * @copy: second arg
 */

void copy_file(const char *origin, const char *copy)
{
	int op, copys, rd;
	char buf[1024];

	op = open(origin, O_RDONLY);
	if (!origin || op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", origin);
		exit(98);
	}

	copys = open(copy, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(op, buf, 1024)) > 0)
	{
		if (write(copys, buf, rd) != rd || copys == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", copy);
			exit(99);
		}
	}

	if (close(op) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op);
		exit(100);
	}

	if (close(copys) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copys);
		exit(100);
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", origin);
		exit(98);
	}
}
