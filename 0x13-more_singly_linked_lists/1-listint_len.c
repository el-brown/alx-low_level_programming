#include "lists.h"

/**
  *listint_len - returns the length of a list
  *Return: int
  *@h: argument
  */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
