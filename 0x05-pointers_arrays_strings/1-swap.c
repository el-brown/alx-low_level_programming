#include "main.h"
/**
  *swap_int - swap 2 integers
  *@a: argument
  *@b: argument
  */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
