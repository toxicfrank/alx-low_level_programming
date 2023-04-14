#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *_calloc - allocates memory of an array
 * @nmemb: function parameter
 * @size: function parameter
 * Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size_of_mem;

/*checking if nmemb or size is equal to 0 and return NULL*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
/*Calculating the memory to be allocated*/
	total_size_of_mem = (nmemb * size);

/*Allocating the memory*/
	ptr = malloc(total_size_of_mem);

/*checking for failure*/
	if (ptr == NULL)
	{
		return (NULL);
	}
/*returning mem block to 0*/
	memset(ptr, 0, total_size_of_mem);
/*returning memory allocated*/
	return (ptr);
}
