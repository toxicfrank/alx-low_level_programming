#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free function
 * @d: function parameter
 */
void free_dog(dog_t *d)
{
	free(d);
}
