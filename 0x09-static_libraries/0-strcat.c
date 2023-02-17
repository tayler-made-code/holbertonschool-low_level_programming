#include "main.h"

/**
* _strcat - Entry point
* @dest: add src to end of dest string
* @src: get string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i, d;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (d = 0; (dest[i + d] = *src++) != '\0'; d++)
	{
	}
	return (dest);
}
