#include "main.h"
#include <stdio.h>
/**
  *print_to_98 - print to 98
  *Return: void
  *@n: argument
  */
void print_to_98(int n)
{
	if (n != 98)
	{
		while (n >= 98)
		{
			if (n > 98)
			{
				printf("%d, ", n);
				n--;
			}
			else
			{
				printf("%d\n", n);
			}
		}
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
				n++;
			}
			else
			{
				printf("%d\n", n);
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
