#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char n = 48;

	while (n <= 102)
	{
		putchar(n);
		putchar('\n');
		if (n == 57)
		{
			n += 39;
			n++;
		}
	}
	putchar('\n');

	return (0);
}
