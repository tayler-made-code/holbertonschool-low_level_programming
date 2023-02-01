#include "main.h"
/**
* print_numbers - Entry point
* @a: gets 1st int for multiplication
* @b: gets 2nd int for multiplication
* Return: a * b
*/
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
