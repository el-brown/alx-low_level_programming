#include "main.h"
/**
  *print_alphabet_x10 - prints alphabets 10 times
  *Description: prints alphabets 10 times
  *Return: void
  */
void print_alphabet_x10(void)
{
	int n;
	int i;

	for  (i = 0; i < 10; i++)
	{
		for (n = 97; n < 123; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
