#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize var of type struct dog
 * @d: pointer to struct dog
 * @name: function parameter
 * @age: function parameter
 * @owner: function parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));/*prevent memory leak*/
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
