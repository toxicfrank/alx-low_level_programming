#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the beginning of
 * a listint_t list.
 * @head: pointer to a pointer to the node
 * @n: cotains integer value
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	/*Check if new node is NULL*/

	if (new_node == NULL)
	{
		return (NULL);
	}
	/*Assign n to the new_node's n*/
	new_node->n = n;
	/*Make the new_nodes next point to the current head*/
	new_node->next = *head;
	/*Make the head point to the new_node*/
	*head = new_node;
	/*Return the address of the new node*/
	return (new_node);
}
