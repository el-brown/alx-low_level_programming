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
		printf("name: %s\n", d->name ? d->name : "(nil)");
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
