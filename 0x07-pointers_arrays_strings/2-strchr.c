#include "main.h"

/**
* _strchr - Entry point
* @s: get string
* @c: character to look for
* Return: first occurence of the character or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);;
}
