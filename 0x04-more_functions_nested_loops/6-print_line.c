#include "main.h"
/**
  *print_line - prints line in your terminal
  *@n: argument
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
