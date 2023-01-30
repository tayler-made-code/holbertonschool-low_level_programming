#include "main.h"
/**
* times_table - Entry point
* r = 0-9 c = 0-9 i = r*c
* Return = times table
*/
void times_table(void)
{
	int r, c, i;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			i = (r * c);

			if (c == 0)
			{
				_putchar('0');
			}
			else if (i < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(i + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}

}
