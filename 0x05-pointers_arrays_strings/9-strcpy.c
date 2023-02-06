#include "main.h"

/**
 * *_strcpy - Entry point
 * @dest: get string
 * @src: get number of elements
 * Return: array with , and space
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
