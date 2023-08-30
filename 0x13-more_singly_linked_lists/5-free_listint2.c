#include "lists.h"

/**
  *free_listint2 - frees a list
  *Return: void
  *@head: argument
  */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
