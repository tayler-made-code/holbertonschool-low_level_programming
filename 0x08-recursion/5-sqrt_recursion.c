#include "main.h"

/**
* sqrt2 - find the square root of n
* @a: get int from _sqrt_recursion
* @b: start with 1, reccursively increase by 1
* Return: square root of n, or -1
*/
int sqrt2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt2(a, b + 1));
}

/**
* _sqrt_recursion - find the square root of n
* @n: get int
* Return: square root of n, or -1
*/

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
