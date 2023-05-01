#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	current = *head;

/*allocate memory for the new node*/
	new = malloc(sizeof(listint_t));

/*Check if memory is allocated*/
	if (new == NULL)
		return (NULL);

/*Assign value to code*/
	new->n = n;
	new->next = NULL;

/*CHeck if head is NULL*/
	if (*head == NULL)
		*head = new;
	else
	{
	/*Traverse list till end*/
		while (current->next != NULL)
			current = current->next;
	/*Assign address of the new node to end node*/
		current->next = new;
	}

/*Return the address of the new node*/
	return (new);
}
