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
	char *cpname, *cpowner;
	dog_t *newdog = malloc(sizeof(dog_t));
	int i;

	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	for (i = 0; name[i]; ++i)
		;
	cpname = malloc(sizeof(char *) * (i + 1));
	if (cpname == NULL)
		return (NULL);
	for (i = i; i >= 0; i--)
		cpname[i] = name[i];
	for (i = 0; owner[i]; ++i)
		;
	cpowner = malloc(sizeof(char *) * (i + 1));
	for (i = i; i >= 0; i--)
		cpowner[i] = owner[i];
	return (newdog);
}