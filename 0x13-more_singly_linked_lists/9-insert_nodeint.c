#include "lists.h"

/**
  *insert_nodeint_at_index - insrt a node at a specefic position
k  *Return: pointer to the new node
  *@head: argument
  *@idx: argument
  *@n: argument
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr1, *ptr = *head;
	unsigned int i = 0;

	ptr1 = malloc(sizeof(listint_t));
	if (ptr1 == NULL || *head == NULL)
	{
		return (NULL);
	}
	while (i < idx)
	{
		ptr = ptr->next;
	}
	ptr1->n = n;
	ptr1->next = ptr->next;
	ptr->next = ptr1;
	return (ptr1);
}
