#include "main.h"
/**
  *print_number - print numbers
  *@n: argument
  */
void print_number(int n)
{
	int a, b, c, d;

	if (n >= 1000)
	{
		a = n % 10;
		n = n / 10;
		b = n % 10;
		n = n / 10;
		c = n % 10;
		n = n / 10;
		d = n % 10;
		_putchar(d + 48);
		_putchar(c + 48);
		_putchar(b + 48);
		_putchar(a + 48);
	}
	else if (n >= 100 && n <= 999)
	{
		a = n % 10;
		n = n / 10;
		b = n % 10;
		n = n / 10;
		c = n % 10;
		_putchar(c + 48);
		_putchar(b + 48);
		_putchar(a + 48);
	}
	else if (n >= 10 && n <= 99)
	{
		a = n % 10;
		n = n / 10;
		b = n % 10;
		_putchar(b + 48);
		_putchar(a + 48);
	}
	else if (n >= 0 && n <= 9)
	{
		_putchar(n + 48);		
	}
	else if (n <= 0 && n >= -9)
	{
		_putchar('-');
		_putchar((n * -1) + 48);
	}
	else if (n <= -10 && n >= -99)
	{
		a = n % 10;
		n = n / 10;
		b = n % 10;
		_putchar('-');
		_putchar((b * -1) + 48);
		_putchar((a * -1) + 48);
	}
}
