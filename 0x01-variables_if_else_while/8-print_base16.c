#include <stdio.h>

/**
 *main - Task 8
 *Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0';
	int base = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (base <= 'f')
	{
		putchar(base);
		base++;
	}
	putchar('\n');
	return (0);
}
