#include "main.h"
/**
* print_line - Entry point
* @n: check for interger
* Return: a _ for each interger
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
