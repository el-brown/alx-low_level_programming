#include "main.h"
/**
  *2-print_alphabet_x10.c - prints alphabets 10 times
  *Return: void
  */
void print_alphabet_x10(void)
{
	int n = 97, i = 0;

	while (i < 10)
	{
		while (n < 123)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
