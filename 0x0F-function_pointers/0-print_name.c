#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - Add a description of the function
* @name: get string
* @f: function pointer
* Return: pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
