#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the lowercase alphabet in reverse.
 * Return: Always 0 (success)
 */
 int main(void)
{
    char n = '0';
    char t = 'a';
     while (n <= '9')
     {
	     putchar(n);
	     putchar('\n');
	     n++;
     }
     while (t <= 'f')
     {
	     putchar(t);
	     putchar('\n');
	     t++;
     }

	 return (0);
}
