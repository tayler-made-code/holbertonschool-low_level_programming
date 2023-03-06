#include "variadic_functions.h"

/**
 * print_numbers - explain the code
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: get arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int stop = n;
	va_list args;

	va_start(args, n);
	{
		if (separator == NULL)
		{
			separator = "";
		}
		while (stop--)
		{
			if (stop > 0)
			{
				printf("%i%s", va_arg(args, int), separator);
			}
			if (stop == 0)
			{
				printf("%i\n", va_arg(args, int));
			}
		}
	}
	va_end(args);
}
