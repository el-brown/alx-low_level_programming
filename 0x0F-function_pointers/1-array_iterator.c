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
	int *p = array + size - 1;

	if (array && size && action)
	{
		while (array <= p)
		{
			action(*array);
			array++;
		}
	}
}
