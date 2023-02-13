#include "main.h"

/**
* _strspn - Entry point
* @s: get string
* @accept: get character to ignore
* Return: location of first non-accept character
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, seek;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		seek = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				seek = 1;
			}
		}
		if (seek == 0)
		{
			return (value);
		}
	}
	return (value);
}
