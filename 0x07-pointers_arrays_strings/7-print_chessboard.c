#include "main.h"

/**
* print_chessboard - Entry point
* @a: pieces
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (col = 0; col < 8; col++)
	{
		for (row = 0; row < 8; row++)
		{
			_putchar(a[col][row]);
		}
		_putchar('\n');
	}
}
