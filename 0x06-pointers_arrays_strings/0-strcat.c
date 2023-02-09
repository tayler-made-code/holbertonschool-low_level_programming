#include "holberton.h"

/**
* *_strcat - Entry point
* @dest: add src to end of dest string
* @src: get string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int d, i;

	for (i = 0; src[i] != '\n'; i++)
	{
	}
	for (d = 0; (dest[i + d] = *src++) != '\0'; d++)
	{
	}
	return (dest);
}
