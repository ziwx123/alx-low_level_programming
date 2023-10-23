#include <stdio.h>

int main(void)
{
	int d1, d2, d3, d4;

	for (d1 = 0; d1 <= 9; d1++)
	{
		for (d2 = d1 + 1; d2 <= 9; d2++)
		{
			for (d3 = d2 + 1; d3 <= 9; d3++)
			{
				for (d4 = d3 + 1; d4 <= 9; d4++)
				{
					putchar(d1 + '0');
					putchar(d2 + '0');
					putchar(',');
					putchar(' ');
					putchar(d3 + '0');
					putchar(d4 + '0');

					if (d1 != 6)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
