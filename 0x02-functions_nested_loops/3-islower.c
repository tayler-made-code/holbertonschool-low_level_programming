#include "main.h"
/**
* _islower - Entry point
* @c: lower case letters
* Return: 1 for true, 0 for false
*/
int _islower(int c)
{
	if (c > 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
