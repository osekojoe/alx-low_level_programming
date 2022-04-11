#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: pointer to the dog to initialize
 * @name: the dog's name
 * @age: dog's age
 * @owner: dog owner's name
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
