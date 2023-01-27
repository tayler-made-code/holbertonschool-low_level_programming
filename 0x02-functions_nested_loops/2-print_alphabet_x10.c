/*
* file: 1-alphabet.c
*
*/
#include "main.h"
/**
* print_alphabet_x10 - Entry point
* Description: prints alphabet
* Return 0
*/
void print_alphabet_x10(void)
{
	char i;
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
		_putchar('\n');
	}
	_putchar('\n');
}
