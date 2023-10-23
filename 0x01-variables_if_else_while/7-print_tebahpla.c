#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the lowercase alphabet in reverse.
 * Return: Always 0 (success)
 */
int main(void)
{
  char i = 'z';

  for (i = 'z'; i >= 'a'; i--)
  {
    putchar(i);
    putchar('\n');
  }

    return (0);
}
