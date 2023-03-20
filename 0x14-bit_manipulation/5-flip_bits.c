#include "main.h"

/**
 * flip_bits - returns the # of bits that would need to be
 * flipped to get from one number to the other.
 * @n: base 10 number
 * @m: base 10 number
 * Return: # of bits that would need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int count = 0;

	i = n ^ m;

	while (i != 0)
	{
		count += i & 1;
		i = i >> 1;
	}
	return (count);
}
