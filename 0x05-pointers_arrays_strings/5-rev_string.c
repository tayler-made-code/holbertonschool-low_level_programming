#include "main.h"

/**
 * rev_string - Entry point
 * @s: get string
 * Return: string and gnirts
 */

void rev_string(char *s)
{
	int revcount = 0;
	int x;
	char inputstring = s[0];

	while (s[revcount] != '\0')
	{
		revcount++;
	}
	for (x = 0; x < revcount; x++)
	{
		revcount--;
		inputstring = s[x];
		s[x] = s[revcount];
		s[revcount] = inputstring;
	}
}
