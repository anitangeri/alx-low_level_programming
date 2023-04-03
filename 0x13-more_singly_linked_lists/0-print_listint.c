#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: a variable that points to a pointer which points to a struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
