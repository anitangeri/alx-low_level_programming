#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given position in a listint_t linked list.
 * @head: Pointer to the pointer to the head node of the list
 * @index: Index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *curr_node, *prev_node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		curr_node = *head;
		*head = (*head)->next;
		free(curr_node);
		return (1);
	}
	prev_node = *head;
	for (i = 0; prev_node != NULL && i < index - 1; i++)
	{
		prev_node = prev_node->next;
	}
	if (prev_node == NULL || prev_node->next == NULL)
	{
		return (-1);
	}
	else
	{
		curr_node = prev_node->next;
		prev_node->next = curr_node->next;
		free(curr_node);
		return (1);
	}
}

