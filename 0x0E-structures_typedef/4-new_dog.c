#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: the dog's name
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int namex, ownerx, i;
	dog_t *dx;

	dx = (dog_t *)malloc(sizeof(dog_t));
	if (dx == NULL)
		return (NULL);
	namex = ownerx = 0;
	while (name[namex++])
		;
	while (owner[ownerx++])
		;
	dx->name = malloc(namex * sizeof(dx->name));
	if (dx->name == NULL)
	{
		free(dx);
		return (NULL);
	}
	for (i = 0; i <= namex; i++)
		dx->name[i] = name[i];
	dx->age = age;
	dx->owner = malloc(ownerx * sizeof(dx->owner));
	if (dx->owner == NULL)
	{
		free(dx->name);
		free(dx);
		return (NULL);
	}
	for (i = 0; i <= ownerx; i++)
		dx->owner[i] = owner[i];
	return (dx);
}
