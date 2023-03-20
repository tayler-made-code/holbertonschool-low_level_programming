#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at index point
 * @n: base 10 number
 * @index: location of value to be changed
 * Return: 1 if it worked, or -1 if errors occur
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	*n = *n & ~mask;

	return (1);
}
