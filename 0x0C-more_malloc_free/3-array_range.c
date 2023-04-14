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
	int array;

/*Checking if min is greater then max*/
	if (min > max)
	{
		return (NULL);
	}

/*calculating the memory*/
	array = (min * max);

/*allocating the mem */
	ptr = malloc(array);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);

}
