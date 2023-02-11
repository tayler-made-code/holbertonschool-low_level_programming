#include "holberton.h"

/**
* *cap_string - Entry point
* @str: get string
* Return: String With Capitals
*/

char *cap_string(char *str)
{
	int i = 0;
	int x;
	char sep[] = {32, '\t', '\n', 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (str[i])
	{
		x = 0;

		while (x < 13)
		{
			if ((i == 0 || str[i - 1] == sep[x]) && (str[i] >= 97 && str[i] <= 122))
			{
				str[i] = str[i] - 32;
			}
			x++;
		}
		i++;
	}
	return (str);
}
