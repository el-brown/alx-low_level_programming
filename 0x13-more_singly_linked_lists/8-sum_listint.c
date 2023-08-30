#include "lists.h"

/**
  *sum_listint - sum all the data
  *Return: int
  *@head: argument
  */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		i += ptr->n;
		ptr = ptr->next;
	}
	return (i);
}
