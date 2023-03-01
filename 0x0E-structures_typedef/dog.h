#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * struct dog - dogs info
 * @name: get dog name
 * @age: get dogs age
 * @owner: get dogs owner name
 *
 * Description: get all dogs information
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
