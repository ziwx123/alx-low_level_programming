#include "main.h"

/**
  *times_table: a fonction used to prints the 9 times table, starting with 0.
  */
void times_table(void)
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i * j);
			putchar (',');
		}
		putchar ('\n');
	}
}
