#include "main.h"
/**
  *_islower - is our function
  *Return: 1 if it is lowercase and 0 if else
  *@c: the argument that is a number of a letter in ascii table
  */
int _islower(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
