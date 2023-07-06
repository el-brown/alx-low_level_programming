#include "main.h"
/**
  *is_prime_number - verify if n is a prime num
  *Return: int
  *@n: argument
  *@i: argument
  */
int div(int n, int i);

int is_prime_number(int n)
{
	return (div(n, 2));
}

/**
  *div - division of n by i
  *Return: int
  *@i: argument
  *@n: argument
  */
int div(int n, int i)
{
	if (i == n && n > 1)
	{
		return (1);
	}
	else if (n <= 1 || n % i == 0)
	{
		return (0);
	}
	else
	{
		return (div(n, i + 1));
	}
}
