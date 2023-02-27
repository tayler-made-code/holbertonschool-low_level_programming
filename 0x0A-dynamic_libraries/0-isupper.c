#include "main.h"
/**
* _isupper - Entry point
* @c: checks ascii table for upper case
* Return: 1 for true, 0 for false
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
