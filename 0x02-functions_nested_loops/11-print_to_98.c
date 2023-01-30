#include "main.h"
/**
* print_to_98 - Entry point
* @n: check for higher than 98 or lower/equal to
* Return: 98
*/
void print_to_98(int n)
{
	int d;

	if (n > 98)
	{
		for (d = n; d > 99 ; d--)
		{
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar(',');
			_putchar(' ');
			continue;
		}
	}
	else if (n < 98)
	{
		for (d = n; d < 98; d++)
		{
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar(',');
			_putchar(' ');
			continue;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
