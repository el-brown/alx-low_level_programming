#include "main.h"
/**
  *_sqrt_recursion - returns square root of a given num
  *Return: int
  *@n: argument
  *@i: argument
  */
int square_root(int n, int i);

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}

/**
  *square_root - calculates a square root of a given num
  *Return: int
  *@i: argument
  *@n: argument
  */
int square_root(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (square_root(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
