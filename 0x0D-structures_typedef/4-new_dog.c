#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));
	int i, j, t;

	for (j = 0; name[j]; j++)
		;
	for (t = 0; owner[t]; t++)
		;
	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc(sizeof(char) * (j + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (t + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i <= j; i++)
		newdog->name[i] = name[i];
	newdog->age = age;
	for (i = 0; i <= t; i++)
		newdog->owner[i] = owner[i];
	return (newdog);
}
