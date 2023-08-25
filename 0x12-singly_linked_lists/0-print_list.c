#include "lists.h"

/**
  * print_list - prints list content
  *Return: int
  *@h: argument
  */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str ? h->str : (nil));
		i++;
		h = h->next;
	}
	return (i);
}
