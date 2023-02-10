#include "holberton.h"

/**
* *_strncpy - Entry point
* @dest: send result here
* @src: get string
* @n: number of characters to copy
* Return: destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
