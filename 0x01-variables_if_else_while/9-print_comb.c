#include <stdio.h>
/**
  *main - entry point
  *Description: print all possible combinations of single-digit numbers
  *Return: always 0
  */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
