#include "lists.h"

/**
 * listint_len - returns the number of nodes in a singly linked list
 * @h: a variable that points to the listint_t struct
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
