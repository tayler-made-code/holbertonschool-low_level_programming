#include "holberton.h"

/**
* *leet - alter only specific characters in string
* @str: get string
* Return: r37urn s7ring
*/

char *leet(char *str)
{
	int i, x;
	int seek[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int destroy[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		x = 0;
		while (x < 10)
		{
			if (str[i] == seek[x])
			{
				str[i] = destroy[x / 2];
			}
			x++;
		}
	}
	return (str);
}
