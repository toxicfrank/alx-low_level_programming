#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer that points to a node
 * Return: always 0
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int numb;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	numb = (*head)->n;
	curr = (*head)->next;
	free(*head);
	*head = curr;
	return (numb);
}
