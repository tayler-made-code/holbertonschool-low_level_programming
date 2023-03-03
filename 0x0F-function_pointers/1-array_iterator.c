#include "function_pointers.h"
/**
* array_iterator - Add a description of the function
* @array: get array of integers
* @size: get size of array
* @action: function pointer
* Return: pointer to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
