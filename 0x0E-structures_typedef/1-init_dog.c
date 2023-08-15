#include "dog.h"
/**
  *init_dog - initialises dog
  *Return: void
  *@d: argument
  *@name: argument
  *@age: argument
  *@owner: argument
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
