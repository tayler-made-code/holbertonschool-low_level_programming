#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - Add a description of the function
* @name: get string
* @f: 
* Return: 
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
