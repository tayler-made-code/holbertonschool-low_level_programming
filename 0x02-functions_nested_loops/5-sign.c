#include "main.h"
/**
* print_sign - Entry point
* @n: positive, 0, negative
* Return: +, 0 , - based on value of int
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(',');
		_putchar(' ');
		_putchar('+');
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
		_putchar(',');
		_putchar(' ');
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
