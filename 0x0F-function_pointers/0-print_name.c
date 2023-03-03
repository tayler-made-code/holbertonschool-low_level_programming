#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - Add a description of the function
* @name: get string
* @f: function pointer for 
* Return: 
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
