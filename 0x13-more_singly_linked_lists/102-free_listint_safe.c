#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: A pointer to the head node of the list
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node = *h;
	listint_t *next = NULL;
	size_t size = 0;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
		size++;
	}
	*h = NULL;
	return (size);
}

