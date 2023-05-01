#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: function parameter
 * Return: void
 */

void free_listint(listint_t *head)
{
/*initialize the current pointer with head*/
	listint_t *current = head;

/*initialize the next pointer*/
	listint_t *next;

/*While current is not NULL*/
	while (current == NULL)
	{
	/*assign the next address to next pointer*/
		next = current->next;

	/*free the current pointer*/
		free(current);

	/*assign the next pointer to current pointer*/
		current = next;
	}

/*assign NULL to head*/
	head = NULL;
}
