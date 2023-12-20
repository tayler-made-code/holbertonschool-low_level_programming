#include "search_algos.h"

/**
* _puts_recursion - Add a description of the function
* @array: pointer to the first element of the array to search in
* @size: the number of elements in the array
* @value: the value to search for
* Return: an index where value is located 
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

  if (array == NULL)
    return (-1);
	
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
