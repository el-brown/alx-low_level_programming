#include "main.h"
/**
  *print_sign - function that prints the sign of a number given
  *Return: -1 if negative, 1 if it is positive and 0 if null
  *@n: is an integer
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
