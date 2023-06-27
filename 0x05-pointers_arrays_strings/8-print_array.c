#include "main.h"
#include <stdio>
/**
  *print_array - print n elements of an array
  *@a: aargoment
  *@n: argument
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	
	if (i != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
