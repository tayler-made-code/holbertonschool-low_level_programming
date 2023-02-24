#include "main.h"

/**
* malloc_checked - Add a description of the function
* @b: get unsigned int
* Return: 0
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
