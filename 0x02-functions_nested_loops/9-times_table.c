#include "main.h"
/**
  *times_table - multiplication table
  *Return: void
  */
void times_table(void)
{
	int m, n;
	int o = (m * n);

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			_putchar(o);
			if (n == 57)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
