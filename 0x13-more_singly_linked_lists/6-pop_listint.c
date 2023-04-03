#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list and returns its data.
 * @head: Pointer to the pointer to the head node of the list
 * Return: The integer value of the head node's data (n)
 */
int pop_listint(listint_t **head)
{
    int n;
    listint_t *tmp;

    if (*head == NULL) {
        return 0;
    }
    else{

    tmp = *head;
    *head = (*head)->next;
    n = tmp->n;
    free(tmp);
    }

    return n;
}





