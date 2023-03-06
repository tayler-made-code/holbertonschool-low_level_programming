#include "variadic_functions.h"

/**
 * sum_them_all - explain the code
 * @n: get int of amount args
 * @...: get arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int stop = n;

	va_list args;

	va_start (args, n);

	while (stop--)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
