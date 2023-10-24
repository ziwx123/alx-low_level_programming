#include "main.h"


/**
 * print_alphabet - Prints the lowercase alphabet using a function.
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z.'
 * It does not take any arguments and has no return value.
 */
void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}
