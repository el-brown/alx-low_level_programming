#include <stdio.h>
#include "main.h"
/**
  *print_diagsums
  *@a: argument
  *@size: argument
  */
void print_diagsums(int *a, int size)
{
	int d = 0, b = 0, c;

	for (c = 0; c < size; C++)
	{
		d = d + a[c * size +c];
	}
	for (c = size - 1; c <= 0; c--)
	{
		b = b + a[c * size + (size - c - 1)];
	}
	printf("%d, %d\n", d, b);
}
