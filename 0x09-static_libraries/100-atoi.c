#include "main.h"

/**
* _atoi - get - or + with string 
* @s: get string
* Return: atoi
*/

int _atoi(char *s)
{
	int i, j, ten2, neg, found;
	unsigned int ten;

	ten = 0;
	i = 1;
	neg = 1;
	found = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if ((s[j] >= 48) && (s[j] <= 57))
		{
			ten = ten * 10 + (s[j] - '0');
			found = 1;
		}
		else if (s[j] == 45)
		{
			neg = neg * -1;
		}
		else if (found == 1)
		{
			break;
		}
	}
	ten2 = ten * neg;
	return (ten2);
}
