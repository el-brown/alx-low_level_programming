#include "main.h"

/**
  *set_bit - sets given index with the value 1
  *Return: int
  *@n: argument
  *@index: argument
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (!!(*n |= 1L << index));
}
