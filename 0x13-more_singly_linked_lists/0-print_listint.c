#include "lists.h"

/**
  *print_listint - prints a list
  *Return: int
  *@h: argument
  */

size_t print_listint(const listint_t *h)
{
	listint_s *ptr = h;
	size_t  count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
	}
	return (count);
}
