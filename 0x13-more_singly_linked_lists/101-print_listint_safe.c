#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: A pointer to the head node of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *curr_node = head;
    size_t num_nodes = 0;

    while (curr_node != NULL)
    {
	    printf("%d\n", curr_node->n);
	    num_nodes++;
	    if (curr_node <= curr_node->next)
	    {
		    exit(98);
	    }
	    else
	    {
		    curr_node = curr_node->next;
	    }
    }
	    return (num_nodes);
}

