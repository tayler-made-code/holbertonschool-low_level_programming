/*
* file: 3-islower.c
*
*/
#include "main.h"
/**
* print_alphabet_x10 - Entry point
* Description: prints alphabet
* Return 0
*/
int _islower(int c)
{
	if (c > 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}

	return(0);
}
