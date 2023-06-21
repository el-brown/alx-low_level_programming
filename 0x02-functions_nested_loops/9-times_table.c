#include "main.h"
/**
  *times_table - multiplication table
  *Return: void
  */
void times_table(void)
{
	int m, n, o;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			o = (m * n);
			if (o <= 9)
			{
				_putchar(o);
			}
			else
			{
				_putchar((o / 10) + 48);
				_putchar((o % 10) + 48);
			}
			if (n == 9)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
