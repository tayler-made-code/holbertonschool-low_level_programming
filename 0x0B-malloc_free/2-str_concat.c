#include "main.h"
#include <stdlib.h>

/**
* str_concat - Add a description of the function
* @s1: get string
* @s2: get string
* Return: string string
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, limit;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	str = malloc(sizeof(char) * (i + j + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}
	limit = j;

	for (j = 0; j <= limit; k++, j++)
	{
		str[k] = s2[j];
	}
	return (str);
}
