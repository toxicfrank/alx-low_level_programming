#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - shoul cause normal process termination with
 * a status value of 98
 * @b: parameter function
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
