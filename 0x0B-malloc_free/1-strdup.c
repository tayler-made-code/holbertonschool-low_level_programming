#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - Add a description of the function
* @str: get string
* Return: array
*/

char *_strdup(char *str)
{
	unsigned int i, end;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	for (end = 0; str[end]; end++)
	{
	}
	end += 1;
	array = malloc(sizeof(char) * end);

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < end; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
