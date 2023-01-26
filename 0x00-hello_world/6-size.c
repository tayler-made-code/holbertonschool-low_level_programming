#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %lu byte(s)", sizeof(d));
	printf("Size of an int: %lu byte(s)", sizeof(a));
	printf("Size of a long int: %lu byte(s)", sizeof(b));
	printf("Size of a long long int: %lu bytes(s)", sizeof(c));
	printf("Size of a float: %lu byte(s)", sizeof(e));
	return (0);
}
