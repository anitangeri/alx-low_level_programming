#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a listint_t linked list.
 * @head: A pointer to the head node of the list.
 * Return: The address of the node where the loop starts, or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *add_node, *node;

	add_node = head->next;
	node = head->next;

	if (node)
		node = node->next;
	while (node != add_node)
	{
		add_node = add_node->next;
		node = node->next;
	}
	if (!node || !add_node)
		return (NULL);
	add_node = head;
	while (add_node != node)
	{
		add_node = add_node->next;
		node = node->next;
	}
	return (add_node);
}

