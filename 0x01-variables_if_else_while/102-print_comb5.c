#include <stdio.h>
/**
  *main - entry point
  *Description: 102
  *Return: always 0
  */
int main(void)
{
	int m;
	int n;
	int a;
	int b;

	for (m = 48; m < 58; m++)
	{
		for (n = 48; n < 58; n++)
		{
			for (a = 48; a < 58; a++)
			{
				for (b = 48; b < 58; b++)
				{
					if ((a + b) > (m + n))
					{
						putchar (m);
						putchar (n);
						putchar (' ');
						putchar (a);
						putchar (b);
						if (m == 57 && n == 56)
						{
							continue;
						}
						else
						{
							putchar (',');
							putchar (' ');
						}
					}
					else
					{
						continue;
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
