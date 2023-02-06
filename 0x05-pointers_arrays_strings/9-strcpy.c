#include "main.h"

/**
 * *_strcpy - Entry point
 * @dest: get string
 * @src: get number of elements
 * Return: array with , and space
 */

char *_strcpy(char *dest, char *src)
{
	int A1;

	for (A1 = 0; src[A1] != '\0'; A1++)
	{
		dest[A1] = src[A1];
	}
	dest[A1] = src[A1];

	return (dest);
}
