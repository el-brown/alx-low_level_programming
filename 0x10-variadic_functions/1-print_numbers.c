#include "variadic_functions.h"
#include <stdio.h>
/**
  *print_numbers - print numbers
  *Return: void
  *@separator: argument
  *@n: argument
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator == 0 || i == n - 1)
		{
			printf("%d", va_arg(ptr, int));
		}
		else
		{
			printf("%d%s", va_arg(ptr, int), separator);
		}
	}
	va_end(ptr);
	printf("\n");
}
