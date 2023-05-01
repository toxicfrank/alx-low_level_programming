#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - function that returns the number of
 * elementsin a linked listint_t list.
 * @h: pointer to the node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h != NULL)
	{
		h = h->next;
		numb++;
	}
	return (numb);
}
