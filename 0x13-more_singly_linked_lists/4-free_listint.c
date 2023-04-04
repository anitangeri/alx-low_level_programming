#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp, *next;

	tmp = head;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	free(head);
}
