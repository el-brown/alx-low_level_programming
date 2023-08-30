#include "lists.h"

/**
  *free_listint - free list
  *Return: void
  *@head: argument
  */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
