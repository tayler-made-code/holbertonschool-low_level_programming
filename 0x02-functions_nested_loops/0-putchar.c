/*
* file: 0-putchar.c
*
*/
#include "main.h"
/**
* main - Entry point
*
* Return: 0
*/
char main(void)
{
	int i;
	char x[] = "_putchar";

	for (i = 0; x[i]; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
