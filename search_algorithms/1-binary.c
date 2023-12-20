#include "search_algos.h"

/**
* binary_search - Add a description of the function
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in the array
* @value: the value to search for
* Return: the index where value is located
*/


int binary_search(int *array, size_t size, int value)
{
	int lower = 0;
	int upper = size - 1;
	int i;

	while (lower <= upper)
	{
		int mid = (lower + upper) / 2;

		printf("Searching in array: ");
		for (i = lower; i <= upper; i++)
		{
			printf("%d", array[i]);
			if (i != upper)
				printf(", ");
		}
		printf("\n");


		/* Check if the value is present at the middle */
		if (array[mid] == value)
			return (mid);

		/* If the value is smaller, ignore the right half */
		else if (array[mid] > value)
			upper = mid - 1;

		/* If the value is larger, ignore the left half */
		else
			lower = mid + 1;
	}

	/* If the value is not present in the array */
	return (-1);
}
