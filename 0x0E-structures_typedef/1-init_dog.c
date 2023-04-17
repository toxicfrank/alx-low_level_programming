#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize var
 * @d: pointer to struct dog
 * @name: function parameter
 * @age: function parameter
 * @owner: function parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
