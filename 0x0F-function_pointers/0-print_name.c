#include "function_pointers.h"
/**
  *print_name - prints a name
  *Return: void
  *@name: argument
  *@f: argument
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	{
		f(name);
	}
}
