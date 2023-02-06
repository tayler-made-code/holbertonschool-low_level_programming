#include "main.h"

/**
 * print_array - Entry point
 * @a: get string
 * @n: get number of elements
 * Return: array with , and space
 */

void print_array(int *a, int n)
{
	int f1;

	for (f1 = 0; f1 < n; f1++)
	{
		if (f1 == 0)
		{
			printf("%d", a[f1]);
		}
		else
		{
			printf(", %d", a[f1]);
		}
	}
	printf("\n");
}
