#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t linked list.
 * @head: Pointer to the pointer to the head node of the list
 * @idx: Index of the position where the new node should be added
 * @n: Integer value to be stored in the new node
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *new_node;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	ptr = *head;
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; ptr != NULL && i < idx - 1; i++)
		{
			ptr = ptr->next;
		}
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = ptr->next;
		ptr->next = new_node;
	}
	return (new_node);
}

