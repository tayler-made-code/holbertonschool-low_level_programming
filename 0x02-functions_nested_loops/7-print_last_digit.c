#include "main.h"
/**
* print_last_digit - Entry point
* @n: check last digit
* Return: last digit only
*/
int print_last_digit(int)
{
	int n;

	if (n > 0)
	{
		return ((n % 10));
	}
	else if (n < 0)
	{
		return (((n * -1) % 10));
	}
	else
	{
		return (0);
	}
}
