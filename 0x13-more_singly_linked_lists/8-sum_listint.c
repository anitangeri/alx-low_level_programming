#include "lists.h"

/**
  * sum_listint - returns sum of all data(n) in list
  * @head: head of list
  * Return: sum of all data in list, 0 if list is empty
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

