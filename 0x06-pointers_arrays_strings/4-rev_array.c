#include "main.h"
/**
  *reverse_array - reverse array
  *@a: argument
  *@n: argument
  */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
