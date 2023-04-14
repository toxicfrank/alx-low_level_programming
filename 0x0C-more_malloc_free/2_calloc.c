#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * *_calloc - function to be called
 * @nmemb: function parameter
 * @size: function parameter
 * Return: memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

/*checking if nmemb and size is = 0*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
/*calculating the memory to be allocated*/
	total_size = nmemb * size;

/*Allocating the size of memory to the pointer*/
	ptr = malloc(total_size);

/*Checking for failure in the programme*/
	if (ptr == NULL)    
	{
		return (NULL);
	}
/*Finally the memory is set to 0*/
	memset(ptr, 0, total_size);
	return (ptr);
}
