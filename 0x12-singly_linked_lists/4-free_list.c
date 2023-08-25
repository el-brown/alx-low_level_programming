#include "lists.h"

/**
  *free_list - free list
  *Return: void
  *@h: argument
  */

void free_list(list_t *head)
{
	list_t *ptr, *next_ptr;

	if (!head)
	{
		return;
	}
	ptr = head;
	while (ptr)
	{
		next_ptr = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = next_ptr
	}
}
