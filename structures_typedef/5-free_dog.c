/**
 * free_dog - frees dogs
 * @d - pointer to the struct
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
