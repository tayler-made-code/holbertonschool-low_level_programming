#include "main.h"
/**
* print_triangle - Entry point
* @size: check for interger
* Return: make a triangle
*/
void print_triangle(int size)
{
	int lines, spaces;

	if (size > 0)
	{
		for (lines = 0; lines < size; lines++)
		{
			for (spaces = 1; spaces <= size; spaces++)
			{
				if (spaces < (size - lines))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
		_putchar ('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
