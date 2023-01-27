/*
* file: 8-print_base16.c
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
	char ch;
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
