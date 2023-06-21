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
			if (m == 0)
			{
				_putchar(48);
			}
			else if (m == 1)
			{
				_putchar(n + 48);
			}
			else
			{
				if ((o / 10) == 0)
				{
					_putchar((o % 10) + 48);
				}
				else
				{
				_putchar((o / 10) + 48);
				_putchar((o % 10) + 48);
				}
			}
			if (n == 9)
			{
				_putchar('\n');
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
