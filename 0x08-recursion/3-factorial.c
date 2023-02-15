#include "main.h"

/**
* factorial - get the factorial of the int (ie, 5*4*3*2*1)
* @n: get int
* Return: -1 if under 0, or the result of the factorial
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
