#include "main.h"

/**
 * get_bit - returns value of bit
 * @n: base 10 number
 * @index: index to print
 * Return: value of bit or -1 for errors
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = (n >> index) & 1;

	if ((bits == 1 || bits == 0))
		return (bits);
	else
		return (-1);
}
