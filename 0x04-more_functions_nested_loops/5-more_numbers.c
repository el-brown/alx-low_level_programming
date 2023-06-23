#include "main.h"
/**
  *more_numbers - print to 14 10 times
  */
void more_numbers(void)
{
	int m;
	int n;
	int o;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar(49);
			}
			o = n % 10;
			_putchar(o + 48);
		}
		_putchar('\n');
	}
}
