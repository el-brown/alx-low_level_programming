#include "main.h"
#include <stdlib.h>
/**
  *_mset - set the memory with 0
  *@p: argument
  *@a: argument
  *@n: argument
  *Return: p
  */
char _mset(char *p, char a, unsigned int n)
{
	char *ptr;

	ptr = p;
	while (n--)
	{
		*p = a;
		p++;
	}
	return (ptr);
}
/**
  * *_calloc - allocates memory and initialize it to 0
  *Return: void
  *@nmemb: argument
  *@size: argument
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *call;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	call = malloc(sizeof(int) * nmemb);
	if (call == 0)
	{
		return (NULL);
	}
	_mset(call, 0, sizeof(int) * nmemb);
	return (call);
}
