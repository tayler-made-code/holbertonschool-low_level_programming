#include "main.h"

/**
* _strchr - Entry point
* @s: get string
* @c: character to look for
* Return: first occurence of the character or NULL
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);;
}
