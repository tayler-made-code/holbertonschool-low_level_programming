#include "main.h"

/**
* _strcmp - compare two strings
* @s1: get string 1
* @s2: get string 2
* Return: 0 if s1==s2, if not return -# or +# number based on ascii comparison
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		else if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
}
