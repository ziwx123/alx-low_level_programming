#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
		    putchar((hours / 10) + '0');
		    putchar((hours % 10) + '0');
		    putchar(':');
		    putchar((minutes / 10) + '0');
		    putchar((minutes % 10) + '0');
		    putchar('\n');
		}
	}
}
