#include "lists.h"

/**
  *add_nodeint_end - adds a node at the end of a list
  *Return: pointer to the new node
  *@head: argument
  *@n: argument
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *ptr1;

	ptr1 = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	while (ptr1->next != NULL)
	{
		ptr1 = ptr1->next;
	}
	ptr1->next = ptr;
	return (ptr);
}
