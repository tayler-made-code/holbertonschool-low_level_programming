#include "main.h"
/**
* times_table - Entry point
* x = 0-9 y = 0-9
* Return = times table
*/
void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			_putchar((x * y) + '0');
			_putchar('\n');
		}
	}

}
