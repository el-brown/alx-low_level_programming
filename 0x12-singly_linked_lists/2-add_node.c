#include "lists.h"

/**
  *add_node - adds anode at the beginning of the list
  *Return: pointer to the new node
  *@head: argument
  *@str: argument
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	char *str1 = strdup(str);
	unsigned int i;

	for (i = 0; str1[i] != '\0'; i++)
		;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->str = str1;
	ptr->len = i;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
