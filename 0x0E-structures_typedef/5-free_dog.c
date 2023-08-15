#include "dog.h"
#include <stdlib.h>
/**
  *free_dog - frees dog
  *Return: void
  *@d: argument
  */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
