#include <stdio.h>
#include <stdlib.h>

/**
* main - print own name with a \n
* @argc: number of arguments
* @argv: array pointing to arguments
* Return: 0
*/

int main(int argc, char **argv)
{
	int i, x;

	x = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		x = 1;
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", i);
	}
	return (x);
}
