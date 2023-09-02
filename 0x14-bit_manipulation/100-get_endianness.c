#include "main.h"

/**
  *get_endianness - checks the indiannes
  *Return: int
  */

int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
