#include "main.h"

/**
 * swap_int - Entry point
 * @a: get first integer
 * @b: get second integer
 * Return: integers swapped
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
