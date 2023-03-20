#include "main.h"

/**
 * binary_to_unit - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 characters
 * Return: converted number or 0 if NULL or has non-binary characters
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	int base = 1, i = 0;

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (i >= 0)
	{
		result = result + ((b[i] - '0') * base);
		base = base * 2;
		i--;
	}
	return (result);
}
