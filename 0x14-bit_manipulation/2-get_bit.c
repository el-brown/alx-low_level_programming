#include "main.h"

/**
  *get_bit - calculates the value of a bit
  *Return: int
  *@n: argument
  *@index: argument
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (n >> index & 1);
}
