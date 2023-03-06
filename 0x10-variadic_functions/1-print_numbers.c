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
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(args, n);
	{
		for (i = 0; i < n; i++)
		{
			printf("%i", va_arg(args, int));
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
