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
		if (d->name == NULL)
		{
			printf("name: (nil)");
		}
		else
		{
			printf("name: %s\n", d->name);
		}
		if (d->age == NULL)
		{
			printf("age: (nil)");
		}
		else
		{
			printf("age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("owner: (nil)");
		}
		else
		{
			printf("owner: %s\n", d->owner);
		}
	}
}
