#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num3++)
			{
				for (num4 = num3 + 1; num4 <= 9; num4++)
				{
					for (num5 = num4 + 1; num5 <= 9; num5++)
					{
						putchar(num1 + '0');
						putchar(num2 + '0');
						putchar(num3 + '0');
						putchar(num4 + '0');
						putchar(num5 + '0');

						if (num1 != 5 || num2 != 6 || num3 != 7 || num4 != 8 || num5 != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return 0;
}
