#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Print all alphabet letters
 *
 * Return: 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
