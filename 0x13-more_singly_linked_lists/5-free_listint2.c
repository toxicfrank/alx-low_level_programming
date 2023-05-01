#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: function parameter
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (*head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}
	*head = NULL;
}
