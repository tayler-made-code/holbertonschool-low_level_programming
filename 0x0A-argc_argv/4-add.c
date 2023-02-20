#include <stdio.h>
#include <stdlib.h>

/**
* main - print own name with a \n
* @argc: number of arguments
* @argv: array pointing to arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (argv[i][j])
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("%s\n", "Error");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
