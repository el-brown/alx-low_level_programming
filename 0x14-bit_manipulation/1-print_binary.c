#include "main.h"

/**
  *print_binary - prints binary
  *Return: void
  *@n: aargument
  */

void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8, i = 0;

	while (b)
	{
		if (n & 1L << --b)
		{
			_putchar('1');
			i++;
		}
		else if (i)
		{
			_putchar('0');
		}
	}
	if (!i)
	{
		_putchar('0');
	}
}
