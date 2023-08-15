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
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
