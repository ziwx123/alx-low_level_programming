#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            int result = i * j;

            if (result < 10)
            {
                if (j != 0)
                {
                    putchar(' ');
                }
                putchar(result + '0');
            }
            else
            {
                putchar((result / 10) + '0');
                putchar((result % 10) + '0');
            }
            if (j < 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
        putchar('\n');
    }
}
