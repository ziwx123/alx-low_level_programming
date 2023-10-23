#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single-digit numbers from 0 to 9.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
	printf("%d", i);
    }
    printf("\n");

    return (0);
}
