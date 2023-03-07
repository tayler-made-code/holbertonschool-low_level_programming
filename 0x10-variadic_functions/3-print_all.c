#include "variadic_functions.h"

/**
 * print_all - explain the code
 * @format: argument types
 * @...: get arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *sep = ", ";
	char *str;

	va_start(args, format);

	while (format && format[i])
		i++;

	while (format && format[j])
	{
		if (j == (i - 1))
		{
			sep = "";
		}
		switch (format[j])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), sep);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", str, sep);
			break;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
