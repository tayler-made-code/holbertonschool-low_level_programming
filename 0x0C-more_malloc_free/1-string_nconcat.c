#include "main.h"

/**
* string_nconcat - Add a description of the function
* @s1: get string
* @s2: get string
* @n: get bytes
* Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, j, strOut, strOut2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n < j)
		j = n;

	j = j + i;
	arr = malloc(sizeof(char *) * (j + 1));

	if (arr == NULL)
		return (NULL);

	for (strOut = 0; strOut < i; strOut++)
		arr[strOut] = s1[strOut];

	for (strOut2 = 0; strOut2 < j; strOut2++)
	{
		arr[strOut] = s2[strOut2];
		strOut++;
	}
	return (arr);
}
