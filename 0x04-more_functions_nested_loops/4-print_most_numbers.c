#include"main.h"
/**
  *print_most_numbers - print numbers but 2 and 4
  */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 52 || n == 50)
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
