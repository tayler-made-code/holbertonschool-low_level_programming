#include "main.h"

/**
* _print_rev_recursion - get string and return in reverse
* @s: get string
* Return: gnirts recurively
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
