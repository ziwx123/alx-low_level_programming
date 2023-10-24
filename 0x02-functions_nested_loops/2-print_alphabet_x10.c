#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 *
 * This function prints the lowercase alphabet in the range from 'a' to 'z'
 * ten times, separated by newline characters.
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	int I = 0;

	for (I = 0; I <= 10; I++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
