#include "lists.h"

/**
  *add_nodeint - adds a node at the beginning
  *Return: pointer
  *@head: argument
  *@n: argument
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
