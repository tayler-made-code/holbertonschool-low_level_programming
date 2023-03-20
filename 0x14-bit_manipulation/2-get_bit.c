#include "main.h"

/**
 * get_bit - returns value of bit
 * @n: base 10 number
 * @index: index to print
 * Return: value of bit or -1 for errors
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, bits;

	if (index > 63)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;

	if ((n & 1) == 1)
		bits = 1;

	if ((n & 1) == 0)
		bits = 0;

	return (bits);
}
