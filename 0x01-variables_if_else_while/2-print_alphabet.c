/*
* file: 2-print_alphabet.c
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
	putchar(x);
	putchar('\n');
	return (0);
}
