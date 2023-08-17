#include "function_pointers.h"
/**
  *array_iterator - array iterator
  *Return: void
  *@array: argument
  *@size: argument
  *@action: argument
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size && array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
