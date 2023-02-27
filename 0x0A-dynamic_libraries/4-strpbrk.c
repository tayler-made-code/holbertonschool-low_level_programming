#include "main.h"

/**
* _strpbrk - Entry point
* @s: get string
* @accept: get characters to seek out
* Return: string from first accept onwards
*/

char *_strpbrk(char *s, char *accept)
{
	const char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return ((char *) s);
			}
			temp++;
		}
		s++;
	}
	return ('\0');
}
