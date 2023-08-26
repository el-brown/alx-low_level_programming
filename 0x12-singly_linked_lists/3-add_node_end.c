#include "lists.h"

/**
  *add_node_end - adds node in the end of the list
  *Return: pointer to the new node
  *@head: argument
  *@str" argument
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *node;
	unsigned int i;
	char *str1;

	node = malloc(sizeof(list_t));
	if (node == NULL || head == NULL)
	{
		return (NULL);
	}
	else
	{
		str1 = strdup(str);
		for (i = 0; str[i] != '\0'; i++)
			;
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		node->str = str1;
		node->len = i;
		node->next = NULL;

		ptr->next = node;
	}
	return (node);
}
