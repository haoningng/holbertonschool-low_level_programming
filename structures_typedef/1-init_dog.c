/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to a struct dog
 * @name: the dog's name in string
 * @age: the dogs' age in float
 * @owner: the dog's owner's name in string
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
