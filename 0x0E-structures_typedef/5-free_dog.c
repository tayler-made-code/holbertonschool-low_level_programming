#include "dog.h"
/**
 * free_dog - frees mem for struct dogs
 * @d: pointer to structer
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
