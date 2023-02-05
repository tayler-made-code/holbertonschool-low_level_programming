#include "main.h"

/**
 * print_rev - Entry point
 * @s: get string
 * Return: gnirts
 */

void print_rev(char *s)
{
	int revcount = 0;

	while (s[revcount] != '\0')
	{
		revcount++;
	}

	while (revcount - 1 >= 0)
	{
		revcount--;
		_putchar(s[revcount]);
	}
	_putchar('\n');
}
