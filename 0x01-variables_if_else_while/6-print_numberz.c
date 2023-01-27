/*
* file: 6-print_numberz.c
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

	for (x = '0'; x >= '9'; x++)
	putchar(x);
	putchar('\n');
	return (0);
}
