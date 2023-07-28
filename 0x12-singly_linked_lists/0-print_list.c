#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *print_list - prinys list
  *Return: size_t
  *@h: argument
  */

size_t print_list(const list_t *h)
{
	lists_t *p = NULL;
	int i = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	p = h;
	while (h != NULL)
	{
		printf("[%d] %s\n", len, p->*str);
		p = p->next;
		i++;
	}
	return (i);
}
