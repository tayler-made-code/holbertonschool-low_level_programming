/*
* file: 4-print_alphabt.c
*
*/
#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
