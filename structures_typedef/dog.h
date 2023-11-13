#ifndef HEADER

#define HEADER

/**
 * struct dog - this represents a dog
 * @name: string representing its name
 * @age: float representing its age
 * @owner: string representing its owner's name
 *
 * Description: A dog structure will have name, age and owner name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
