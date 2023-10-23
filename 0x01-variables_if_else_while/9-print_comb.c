#include <stdio.h>

/**
 * main - Entry point
 * Description:a program that prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
  char i;
  for (i = '0'; i <= '9'; i++)
  {
     putchar(i);
     putchar(', ');
  }

  return (0);
}
