#include "dog.h"
#include <stdio.h>
/**
  *print_dog - prints structure
  *Return: void
  *@d: argument
  */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("name: %s\nage: %f\nowner: %s\n", d->name, d->age, d->owner);
	}
}
