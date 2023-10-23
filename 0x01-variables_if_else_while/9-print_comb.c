#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints all possible combinations of single-digit numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
    int i = 0;

    while (i < 10)
    {
       putchar('0' + i);

       if (i < 9)
       {
	 putchar(',');
	 putchar(' ');
       }

       i++;
    }

    putchar('\n');

    return (0);
}
