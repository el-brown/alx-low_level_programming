#include <stdio.h>
/**
  *main - entry point
  *Description: 100-print_comb3.c
  *Return: always 0
  */
int main(void)
{
	int n;
	int m;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
		if (m > n)
		{
			putchar (n);
			putchar (m);
			if (n == 56 && m == 57)
			{
				continue;
			}
			putchar (',');
			putchar (' ');
		}
		else
		{
				continue;
		}
		}
	}
	putchar ('\n');
	return (0);
}
