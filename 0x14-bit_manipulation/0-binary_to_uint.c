#include "main.h"

/**
  *binary_to_uint - converts binary to unsigned int
  *Return: int
  *@b: argument
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b < 48 || *b > 49)
		{
			return (0);
		}
		n = n * 2 + (*b++ - '0');
	}
	return (n);
}
