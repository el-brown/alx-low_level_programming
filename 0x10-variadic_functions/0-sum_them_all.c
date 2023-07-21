#include "variadic_functions.h"
/**
  *sum_them_all - sums all arguments
  *Return: int
  *@n: argumaent
  *@...: argument
  */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	unsigned int j;
	va_list p;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(p, n);
		for (j = 0; j < n; j++)
		{
			i += va_arg(p, int);
		}
	}
	return (i);
}
