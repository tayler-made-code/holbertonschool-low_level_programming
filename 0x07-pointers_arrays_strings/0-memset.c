#include "main.h"

/**
* _memset - Fill the first n bytes of memory pointed to by s with bytes from b
* @s: pointer to memory
* @b: constant byte
* @n: how many bytes to fill
* Return: ptr value
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
