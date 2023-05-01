#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointes to the node
 * @index: function parameter that contains integer
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	listint_t *curr = head;

	while (curr && a < index)
	{
		curr = curr->next;
		a++;
	}
	return (curr ? curr : NULL);
}
