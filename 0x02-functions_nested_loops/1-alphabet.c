#include "main.h"
/**
  *print_alphabet - a fonction that prints alphabets in lowercase
  *Return: void
  */
void print_alphabet(void)
{
	int n = 97;

	while (n < 123)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
