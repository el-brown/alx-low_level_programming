#include "main.h"
/**
  *jack_bauer - 24 hours function
  *Return: void
  */
void jack_bauer(void)
{
	int m;
	int n;
	int o;
	int p;

	for (m = 48; m <= 50; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (o = 48; o <= 53; o++)
			{
				for (p = 48; p <= 57; p++)
				{
					if (m >= 50 && n >= 52)
					{
						break;
					}
					_putchar(m);
					_putchar(n);
					_putchar(':');
					_putchar(o);
					_putchar(p);
					_putchar('\n');
				}
			}
		}
	}
}
