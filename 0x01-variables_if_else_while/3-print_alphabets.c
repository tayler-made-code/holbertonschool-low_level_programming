/*
* file: 3-print_alphabets.c
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
	char d;

	for (x = 'a'; x <= 'z'; x++)
	putchar(x);

	for (d = 'A'; d <= 'Z'; d++)
	putchar(d);

	putchar('\n');
	return (0);
}
