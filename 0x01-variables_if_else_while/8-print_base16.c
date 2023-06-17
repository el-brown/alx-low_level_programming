#include <stdio.h>
/**
  *main - entry point
  *Description: print numbers of base 16 in lowercase
  *Return: always 0
  */
int main(void)
{
	int a = 48;
	int b = 97;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	while (b < 103)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
