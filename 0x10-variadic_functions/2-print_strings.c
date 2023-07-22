#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_strings - prints strings
  *Reurn: void
  *@separator: argument
  *@n: argument
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	va_start(ap, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (va_arg(ap, char *) != NULL)
			{
				printf("%s", va_arg(ap, char *));
			}
			else
			{
				printf("(nil)");
			}
		}
		printf("\n");
	}
	else
	{
		for (j = 0; j < n - 1; j++)
		{
			if (va_arg(ap, char *) != NULL)
			{
				printf("%s", va_arg(ap, char *));
				printf("%s", separator);
			}
			else
			{
				printf("(nil)");
				printf("%s", separator);
			}
		}
		if (j == n - 1)
		{
			printf("%s", va_arg(ap, char *));
		}
		printf("\n");
	}
	va_end(ap);
}
