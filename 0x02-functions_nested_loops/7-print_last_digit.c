#include "main.h"
/**
* print_last_digit - Entry point
* @n: check last digit
* Return: last digit only
*/
int print_last_digit(int n)
{
	int ln;

	ln = (n % 10);

	if (ln < 0)
	{
	ln = (ln * -1);
	}

	_putchar(ln + '0');
	return (ln);
}
