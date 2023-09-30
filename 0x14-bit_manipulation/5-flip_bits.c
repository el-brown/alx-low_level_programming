#include "main.h"

/**
 * flip_bits - flip bits
 * Return: unsigned int
 * @n: argument
 * @m: argument
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		if (x & 1l)
			count++;
		x = x >> 1;
	}
	return (count);
}
