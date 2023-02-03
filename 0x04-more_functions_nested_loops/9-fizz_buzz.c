#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Description: prints 1..100 and replaces multiples of 3 and/or 5
*
* Return - Always 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 101; i++)
	{
		if (i <= 100)
		{
			if ((i % 3) == 0 && (i % 5) != 0)
			{
				printf("Fizz");
			}
			else if ((i % 5) == 0 && (i % 3) != 0)
			{
				printf("Buzz");
			}
			else if ((i % 3) == 0 && (i % 5) == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("%i", i);
			}
			if (i < 100)
			{
				printf(" ");
			}
			else
			{
				continue;
			}

		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
