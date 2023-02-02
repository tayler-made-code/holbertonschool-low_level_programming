#include "main.h"
/**
* print_square - Entry point
* @size: check for interger
* Return: # in a size x size pattern
*/
void print_square(int size)
{
	int lines, h;

	if (size > 0)
	{
		for (lines = 0; lines < size; lines++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}
		_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
