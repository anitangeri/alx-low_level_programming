#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the list.
 * Return: pointer to the first node of the reversed list
 **/
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev_node = NULL, *next_node = *head;
    listint_t *next;

    while (next_node != NULL)
    {
	    next = next_node->next;
	    prev_node = next_node;
	    next_node = next;
    }
    *head = prev_node;
    return (*head);
}

