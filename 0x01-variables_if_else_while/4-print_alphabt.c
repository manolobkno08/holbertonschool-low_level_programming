#include <stdio.h>

/**
 *main - Task 4
 *Return: Always 0 (Success)
 */

int main(void)
{
	int qe = 'a';

	while (qe <= 'z')
	{
		if ((qe != 'e') && (qe != 'q'))
		{
			putchar(qe);
		}

		qe++;
	}

	putchar('\n');
	return (0);
}
