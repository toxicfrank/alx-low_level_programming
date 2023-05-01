#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to a node
 * Return: sum
 */
 
 int sum_listint(listint_t* head) {
	/* Variable to store the sum of the list */
	int sum = 0;
	
	/* If the list is empty, return 0 */
	if (head == NULL) {
		return 0;
	}
	
	/* Iterate through the list and add each node's data (n) to the sum */
	while (head != NULL) {
		sum += head->n;
		head = head->next;
	}
	
	return (sum);
}
