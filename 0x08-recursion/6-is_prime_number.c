#include "main.h"

/**
* prime - determine if a is divisible by b
* @a: get int to check for prime
* @b: get int for recursion
* Return: 1 if prime, 0 if not, recurse until b = a
*/

int prime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (b % a == 0)
	{
		return (0);
	}
	return (prime(a, b + 1));
}

/**
* is_prime_number - determine if int is divisible by only itself and 1
* @n: get int
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	return (prime(n, 2));
}
