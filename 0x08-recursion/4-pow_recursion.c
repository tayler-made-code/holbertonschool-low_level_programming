#include "main.h"

/**
* _pow_recursion - Add a description of the function
* @x: 
* @y: 
* Return: 
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (x);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(y - 1);
	}
}
