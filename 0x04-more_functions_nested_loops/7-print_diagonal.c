#include "main.h"
/**
* print_diagonal - Entry point
* @n: check for interger
* Return: \ for each interger
*/
void print_diagonal(int n)
{
	int lines, spaces;

	if (n > 0)
	{
		for (lines = 0; lines < n; lines++)
		{
			for (spaces = 0; spaces < lines; spaces++)
			{
				_putchar(' ');
			}
		_putchar ('\\');
		_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
