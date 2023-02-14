#include "main.h"

/**
* _strstr - Entry point
* @haystack: string to search in
* @needle: substring to find
* Return: needle if found or NULL if not
*/

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return(0);
}
