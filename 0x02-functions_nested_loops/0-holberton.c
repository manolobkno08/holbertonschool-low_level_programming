#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{

	char hol[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
		putchar(hol[i]);

	putchar('\n');
	return (0);
}
