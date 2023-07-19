#include "dog.h"
/**
  *init_dog - initialize the dog
  *Return: void
  *@d: dog init
  *@name: its name
  *@age: its age
  *@owner: its owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
