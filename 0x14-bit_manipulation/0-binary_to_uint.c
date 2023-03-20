#include "main.h"

/**
 * _strlen - Entry point
 * @s: get string
 * Return: string length
 */

unsigned int _strlen(const char *s)
{
	unsigned int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 characters
 * Return: converted number or 0 if NULL or has non-binary characters
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0, slen = _strlen(b);

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	if (i != slen)
		return (0);
	return (val);
}
