#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *_strlen - length of a string
  *@s: string
  *@Return: int
  */
int _strlen(char *s)
{
	int i = 0;

	if(!s)
	{
		return (0);
	}
	while(*s++)
	{
		i++;
	}
	return (i);
}

/**
  *print_list - prinys list
  *Return: size_t
  *@h: argument
  */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), s->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
