#include "main.h"
/**
* _abs - Entry point
* @n: check for negative or 0
* Return: absolute value
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return ((n * -1));
	}
	else
	{
		return (0);
	}
}
