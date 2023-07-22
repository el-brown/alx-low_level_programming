#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers - prints numbers
  *Return: void
  *@separator: argument
  *@n: argument
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	va_start(ap, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
		}
		printf("\n");
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			if (j < n - 1)
			{
				printf("%d", va_arg(ap, int));
				printf("%s", separator);
			}
			else
			{
				printf("%d", va_arg(ap, int));
			}
		}
		printf("\n");
	}
	va_end(ap);
}
