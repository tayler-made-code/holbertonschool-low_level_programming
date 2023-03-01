#include <stdio.h>

	for (i = 0; arr[i]; i++)
	{
		product = 1;

		for (j = 0; arr[j]; j++)
		{
			if (j == i)
			{
				j++;
			}
			product *= arr[j]
		}
		productArray[i] = product
	}
	return (productArray);
