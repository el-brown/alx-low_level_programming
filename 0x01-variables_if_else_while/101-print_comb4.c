#include <stdio.h>
/**
  *main - entry point
  *Description: print combinations of 3 digits
  *Return: always 0
  */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				if (c > b && b > a)
				{
					putchar (a);
					putchar (b);
					putchar (c);
					if (a == 55 && b == 56 && c == 57)
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
	putchar ('\n');
	return (0);
}
