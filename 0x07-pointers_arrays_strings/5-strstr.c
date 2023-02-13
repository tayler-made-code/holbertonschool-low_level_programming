#include "main.h"

/**
* _strstr - Entry point
* @haystack: string to search in
* @needle: substring to find
* Return: needle if found or NULL if not
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char n = *needle, h = *haystack;

		while (h == n && n != '\0')
		{
			h++;
			n++;
		}
		if (n == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
