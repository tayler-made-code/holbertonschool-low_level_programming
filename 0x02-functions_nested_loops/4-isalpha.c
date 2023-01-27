#include "main.h"
/**
* _isalpha - Entry point
* @c: any letter, upper or lower
* Return: 1 for true, 0 for false
*/
int _isalpha(int c)
{
	if (c > 97 && c <= 122)
	{
		return (1);
	}
	else if (c > 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
