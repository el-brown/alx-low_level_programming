#include "variadic_functions.h"
#include <stdio.h>
/**
  *print_strings- print strings
  *Return: void
  *@separator: argument
  *@n: argument
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%s%s", (str = va_arg(ptr, char *)) ? str : "(nil)", (i < n - 1) ? (separator ? separator : "") : "\n");
	}
	va_end(ptr);
}
