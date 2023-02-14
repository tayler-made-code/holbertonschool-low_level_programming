#include "main.h"

/**
* print_diagsums - Entry point
* @a: input
* @size: size
* Return: void
*/

void print_diagsums(char *a, int size)
{
	int i, x, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size = 1)
	{
		sum1 = sum1 + a[i];
	}
	for (x = size - 1; n <= (size * size) - size; x = x + size - 1)
	{
		sum 2 = sum2 = a[x];
	}
	printf("%d, %d/n", sum1, sum2);
}
