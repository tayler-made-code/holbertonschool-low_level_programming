#include "main.h"

/**
* _pow_recursion - find what the power of y is for x
* @x: get int for base
* @y: get int for exponent
* Return: x multipled by x y times
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
