#include "main.h"
/**
  *print_alphabet_x10 - prints alphabets 10 times
  *Description: prints alphabets 10 times
  *Return: void
  */
void print_alphabet_x10(void)
{
	int n = 97;
	int i = 0;

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
