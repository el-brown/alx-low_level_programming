#include "main.h"

/**
 * set_bit - set a bit
 * Return: integer
 * @n: argument
 * @index: argument
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
