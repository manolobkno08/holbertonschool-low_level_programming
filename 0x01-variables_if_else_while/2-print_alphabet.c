#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int alp = 97;

	while (alp <= 122)
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
