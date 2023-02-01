#include "main.h"
/**
* print_diagonal - Entry point
* @n: check for interger
* Return: a _ for each interger
*/
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
