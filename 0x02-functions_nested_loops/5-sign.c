#include "main.h"
/**
* print_sign - Entry point
* @n: positive, 0, negative
* Return: +, 0 , - based on value of int
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (">");
	}
	else if (n < 0)
	{
		return ("<");
	}
	else
	{
		return (0);
	}
}
