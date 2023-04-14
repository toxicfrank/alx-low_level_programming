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
	int *arr;
	int size, i;

/*Checking if min is greater then max*/
	if (min > max)
	{
		return (NULL);
	}

	size = max;

	arr = (int *) malloc(sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}

	return (arr);
}
