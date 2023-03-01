#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
