/*
* file: 9-print_numbers.c
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
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
		continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
