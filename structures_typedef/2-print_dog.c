#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.5f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
