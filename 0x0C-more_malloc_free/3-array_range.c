#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * *array_range - returns an array of integers
 * @min: function parameter
 * @max: function parameter
 * Return: array of interger
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) + sizeof(*ptr));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}

	return (ptr);
}
