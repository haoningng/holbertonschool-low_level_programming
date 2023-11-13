#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name in string
 * @age: dog's age in float
 * @owner: dog's owner's name in string
 *
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pointer;
	char *n;
	char *o;

	n = name;
	o = owner;
	pointer = malloc(sizeof(dog_t));
	if (pointer == NULL)
	{
		return (NULL);
	}
	if (pointer != NULL)
	{
		pointer->name = n;
		pointer->age = age;
		pointer->owner = o;
	}
	return (pointer);
}
