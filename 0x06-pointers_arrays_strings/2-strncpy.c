#include "holberton.h"

/**
* *_strncpy - Entry point
* @dest: 
* @src: get string
* @n: number of 
* Return: destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (*dest == '\0' || *src == '\0' || n == 0)
	{
		return (dest);
	}

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	
}
