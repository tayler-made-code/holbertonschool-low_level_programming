#include "main.h"

/**
 * _strlen - Entry point
 * @s: get string
 * Return: string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
