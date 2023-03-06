#include "variadic_functions.h"

/**
 * print_strings - explain the code
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: get arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(args, n);
	{
		while (i < n)
		{
			s = va_arg(args, char *);

			if (s == NULL)
			{
				printf("(nil)");
				if (i != (n - 1))
				{
					printf("%s", separator);
				}
			}
			else
			{
				printf("%s", s);
				if (i != (n - 1))
				{
					printf("%s", separator);
				}
			}
		i++;
		}
	}
	printf("\n");
	va_end(args);
}
