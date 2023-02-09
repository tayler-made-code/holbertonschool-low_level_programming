#include "holberton.h"

/**
* *_strncat - Entry point
* @dest: add src[n] to end of dest string
* @src: get string
* @n: get integer
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, d;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (d = 0; d < n; d++)
	{
		dest[i + d] = src[d]
		if (src[d] == '\0')
		{
			d = n;
		}
	}
	return (dest);
}
