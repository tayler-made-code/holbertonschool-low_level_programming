#include "holberton.h"

/**
* *_strcat - Entry point
* @dest: add src to end of dest string
* @src: get string
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
/* dest is s1(Hello )(7 with null), src is s2("World!\n") */
	int d = 6;
	int i;

	for (i = 0; src[i] != '\n'; i++)
	{
		dest[d] = src[i];
		d++;
	}
	dest[d] = '\n';
	d++;
	dest[d] = '\0';
	return (dest);
}
