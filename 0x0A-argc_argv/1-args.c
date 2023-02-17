#include <stdio.h>
#include "main.h"

/**
* main - print own name with a \n
* @argc: number of arguments
* @argv: array pointing to arguments
* Return: 0
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
