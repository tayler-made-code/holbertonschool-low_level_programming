#include "main.h"
/**
* add - Entry point
* @x & @y: check for two intergers
* Return: o = sum of x+y
*/
int add(int x, int y)
{
	int o;

	o = (x + y);
	if (o < 10)
	{
		return (o);
	}
	else if (o > 10)
	{
		_putchar((o / 10) + '0');
		return ((o % 10) + 0);
	}
	else
	{
		return (0);
	}
}
