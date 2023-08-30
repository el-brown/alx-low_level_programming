#include "lists.h"

/**
  *get_nodeint_at_index - get the node
  *Return: pointer to the node
  *@head: argument
  *@index: argument
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i != index)
	{
		ptr = ptr->next;
		i++;
	}
	if (i != index)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
}
