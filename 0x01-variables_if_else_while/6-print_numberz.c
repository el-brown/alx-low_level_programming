#include <stdio.h>
/**
  *main - entry point
  *Description: print all single digit numbers in base 10
  *Return: always 0
  */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);

	}
	putchar('\n');
	return (0);
}
