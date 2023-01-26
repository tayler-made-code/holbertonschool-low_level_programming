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

	for (x = 'z'; x >= 'a'; x--)
	putchar(x);

	for (d = 'Z'; d >= 'A'; d--)
	putchar(d);

	putchar('\n');
	return (0);
}
