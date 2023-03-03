#include "dog.h"
/**
 * new_dog - change dog info
 * @name: get dog name
 * @age: get int for age
 * @owner: get dog owners name
 * Return: new_name
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	int i, name_len = 0, owner_len = 0;

	new_name = (dog_t *) malloc(sizeof(dog_t));
	if (new_name == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;
	new_name->name = (char *) malloc(name_len + 1);
	if (new_name->name == NULL)
	{
		free(new_name);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
	{
		new_name->name[i] = name[i];
	}
	while (owner[owner_len])
		owner_len++;
	new_name->owner = (char *) malloc(owner_len + 1);
	if (new_name == NULL)
	{
		free(new_name->name);
		free(new_name);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
	{
		new_name->owner[i] = owner[i];
	}
	new_name->age = age;
	return (new_name);
}
