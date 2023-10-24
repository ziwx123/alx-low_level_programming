#include "main.h"

/**
 * _abs - calculates the absolute value of an integer
 * @n: The integer for which to calculate the absolute value
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (0);
	}
}
