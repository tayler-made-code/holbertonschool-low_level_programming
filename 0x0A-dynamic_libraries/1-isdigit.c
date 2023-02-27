#include "main.h"
/**
* _isdigit - Entry point
* @c: checks ascii table for 0-9
* Return: 1 for true, 0 for false
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
