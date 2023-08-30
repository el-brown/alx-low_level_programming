#include "lists.h"

/**
  *pop_listint - delete the head node
  *Return: int
  *@head: argument
  */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = ptr->n;
	*head = ptr->next;
	free(ptr);
	ptr = NULL;
	return (n);
}
