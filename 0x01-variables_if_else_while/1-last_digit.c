#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print the value of n
 *
 * Return: 0 (success)
 */
int main(void)
{
    int n, digit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    /* Your code goes here */
    digit = n % 10; /* Calculate the last digit */

    if (digit > 5)
    {
	    printf("Last digit of %i is %i and is 0", n, digit);
    }
    else if (digit == 0)
    {
	    printf("Last digit of %i is %i and is 0", n, digit);
    }
    else
    {
	    printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
    }

    return (0);
}
