#include "main.h"
/**
 * _sqrt_recursion - find natural square root
 * Return: int
 * @n: argument
 * @i: argument
 */
int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - calculates the square of i
 * Return: int
 * @n: argument
 * @i: argument
 */
int square(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (square(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
